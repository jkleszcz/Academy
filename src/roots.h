#ifndef ROOTS_H
#define ROOTS_H

struct solution{
    double x1;
    double x2;
    int count;
    bool identity;
};
solution roots(double a, double b, double c);

#endif // ROOTS_H
