#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "wymierne.h"
#include <cmath>
#include <memory>
using namespace std;


class Expression
{
public:
    virtual ~Expression()=0;

    virtual double eval() const=0;
};

/*Expression::Expression(){

}*/


class Literal: public Expression{
    double val;
public:
    explicit Literal(double val): val(val) {};
    double eval()  const override{
        return val;
    }
    };

class BinaryOperator: public Expression{
protected:
    std::unique_ptr<Expression> left;
    std::unique_ptr<Expression> right;
public:
    BinaryOperator(Expression* left, Expression *right): left(left), right(right){}
    double eval() const override{
        return Expression::eval();
    }

};

class UnaryOperator: public Expression{
protected:
    Expression * subexpr;
public:
    double eval() const override{
        return Expression::eval();
    }
};

class Add: public BinaryOperator{

public:
    using BinaryOperator::BinaryOperator;
    double eval() const override{
        return left->eval()+right->eval();
    }

};

class Multiply: public BinaryOperator{
public:
    using BinaryOperator::BinaryOperator;
    double eval() const override{
        return left->eval()*right->eval();
    }
};

class Minus: public UnaryOperator{
public:
    using UnaryOperator::UnaryOperator;
    double eval() const override{
        return -subexpr->eval();
    }
};

class SqRoot: public UnaryOperator{
public:
    using UnaryOperator::UnaryOperator;
    double eval() const override{
        return sqrtf(subexpr->eval());
    }
};

#endif // EXPRESSION_H
