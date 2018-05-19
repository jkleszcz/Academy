#include<cstring>

class String {
    char* buf;
public:
    String(const char* str): buf{new char[strlen(str) + 1]} {
        std::strcpy(buf, str);
    }

    //mozna uzyc pierwszego konstruktora
    //Konstruktor kopiujacy
    String(const String& other): buf{new char[strlen(other.buf)+1]} //String{other.buf} od cpp11 i  wtedy w ciele juz ni nie ma
    {
        std::strcpy(buf,other.buf);
    }

    //Operator przypisania
    String& operator=(const String& other){
        if(this == &other){
            return *this;
        }
        //II ROzwiazanie: zrobic tymczasowy bufor, przepisac do niego oryginalny, potem usunac staty i do buf przypisac temp.
        //To obsluguje sytuacje typu a=a

        //III Rozwiazanie: Jak mamy operator kopiujacy to robimy na others tymczasowy obiekt, a potem robimy swap na bufach
        //slabo z wydajnoscia, ale a=a raczej nie zdarza sie czesto
        delete[] buf;
        buf = new char[strlen(other.buf)+1];
        std::strcpy(buf,other.buf);
        return *this;
    }

    ~String() {
        delete[] buf;
    }
};


/*
int main() {
    String a{"Ala"};
    String b{a}; // operator kopiujacy
    String c{"Kot"};
    c = a;
}
*/
