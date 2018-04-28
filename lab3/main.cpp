#include <iostream>

using namespace std;
//mierzenie czasu
/*
#include <chrono>

using namespace std;

int main()
{
    using ns = chrono::nanoseconds;
    using get_time = chrono::steady_clock;

    auto start = get_time::now();
    //...
    auto end = get_time::now();
    auto diff = end - start;
    cout << "Elapsed time is : " << chrono::duration_cast<ns>(diff).count() << " ns " << endl;
    return 0;
}*/

//ma znaczenie w jakiej kolejnosci deklarujemy pola - sizeof
class C1{
    int x;
    int z;
    long y;
};


class C2{};

class C3{
    char c;
};

unsigned long factorial(unsigned long n){
    if(n == 0)
        return 1;
    else
        return n*factorial(n-1);
}

unsigned long fibbo(unsigned long n){
    if(n == 0 || n == 1)
        return n;
    else
        return (fibbo(n-1) + fibbo(n-2));
}

int main(int argc, char *argv[])
{
    //Cw z rozmiarmi klas w zaleznosci od ustawienia pol
    /*cout << sizeof(C2);
    C2 *p2 = new C2;
    cout << sizeof(p2);
    cout << sizeof(C3);
    cout << factorial(5);
    */

    //Cw z rzutowaniem
    /*float x;
    unsigned int a = 123456789;
    x = a;
    cout << a << endl;
    cout << x << endl;

    printf("%d , %f", a,x);
    */

    //cout << fibbo(50);
    cout << factorial(50);
    return 0;
}
