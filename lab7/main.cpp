#include <iostream>
#include <string>
using namespace std;

struct A{
    virtual void f() const {}
    virtual ~A() = default;
};

struct B : A{
    void f() const override {}
};

    void f(A a)

int main(int argc, char *argv[])
{

    return 0;
}








//Do poprzednich zajec
//Evaluator przy pomocy wzorca Visitor
/*
double eval_expression(const Expression &e){
    if(const Literal* lit = dynamic_cast<Literal*>(&e)){
        return val->getValue();
    } else if(const Add* add - dynamic_cast<const Add*>(&e)){
        return eval_expression(add->getRight()) + eval_expression(add->getLeft());
    }
    //i teraz tak samo dla MUL

    class Evaluator : public Visitor{
        double value;
        void visit(const Literal& e) override{
            value.getValue();
        }
        void visit(const Add& e) override{
            e.getLeft().accept(*this);
            double leftValue = value;
            e.getRigth().accept(*this);
            value = LeftValue + rightValue;
        }

        double getValue(){
            return value;
        }
    };
}
*/
