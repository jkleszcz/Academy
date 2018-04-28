#include <iostream>
#include "plik.h"

using namespace std;

int main()
{
    //Swap exercise
    /*int x = 10;
    int y = 20;
    cout << "x and y before swap: " << x << "  " << y << endl;
    swap2ints(&x,&y);
    cout << "x and y after swap: " << x << "  " << y << endl;
    */

    /*Zeby wpadlo w petle nieskonczona musi zostac zmodyfikowane i. U nas idac po kolei liczbowo pierwsza w pamieci
     * ustawiona jest tablica, a za nia siedzi zmienna long i. W petli cofamy sie z komorkami pamieci.
     * Zeby i zostalo zmodyfikowane, prawdopodobnie ustawione jest w pamieci o dokladnie jedna komorke wczesniej niz
     * pierwszy element tablicy.
     */
    //f2();

    //0b 1000 00000111 00000110 00000101 00000100 00000011 00000010 00000001
    //      8        7        6        5        4        3        2        1
    //castDemo1();

    //Tak samo jak w poprzednim tylko teraz mamy dwie liczby. Int ma 4 bajty, a my odczytujemy 8, wiec bierze drugielement
    //tablicy. Jednym ciagniem wypisalo wiec dwie liczby w rozkladzie na bajty
    /*std::cout << sizeof(int) << std::endl;
    castDemo2();
    */

    //na potem
    /*std::cout << sizeof(float) << std::endl;
    castDemo3();
    */

    castDemo4();
    return 0;
}
