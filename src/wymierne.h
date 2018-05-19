#ifndef WYMIERNE_H
#define WYMIERNE_H

#include<iostream>

class Rational{
    int nominator;
    int denominator;

public:
    Rational(int nom, int denom=1)
        :nominator(nom), denominator(1){}
    int nom() const {return nominator;}
    int denom() const {return denominator;}

    Rational& operator += (Rational a){

        return *this;
    }

};
inline Rational operator - (Rational a){

}

inline Rational operator + (Rational a, Rational b){

}

inline bool operator == (Rational a, Rational b);
inline bool operator != (Rational a, Rational b);
inline bool operator >= (Rational a, Rational b);
inline bool operator <= (Rational a, Rational b);
inline bool operator < (Rational a, Rational b);
inline bool operator > (Rational a, Rational b);
inline std::ostream& operator << (std::ostream& os, Rational a){
    os<<a.nom()<<"/"<<a.denom();
    return os;
}

#endif // WYMIERNE_H
