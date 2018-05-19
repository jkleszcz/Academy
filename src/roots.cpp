#include<iostream>
#include "roots.h"
#include <cmath>



solution roots(double a, double b, double c){
    solution S;

    if(a==0){
        if(b==0){
            if(c==0){
                S.identity=true;
            }
            else{
                S.count=0;
                S.identity=false;
            }
        }
        else{
            S.count=1;
            S.x1=-c/b;
            S.identity=false;
        }
    }
    else{
        const double delta=b*b-4*a*c;
        if(delta>0){
            S.count=2;
            S.x1=(-b-sqrtf(delta))/(2*a);
            S.x2=(-b+sqrtf(delta))/(2*a);
        }
        else if (delta==0){
            S.count=1;
            S.x1=-b/(2*a);
        }
        else{
            S.count=0;
        }
        S.identity=false;
    }
    return S;
}
