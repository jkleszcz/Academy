#include "expression.h"
#include<iostream>
using namespace std;

std::unique_ptr<Expression> random_expression(){
    double los=3*(double)std::rand()/RAND_MAX;
    int in=(int)los;
    switch(in){
    case 0:
        return std::unique_ptr<Expression> {new Literal{rand()%10}};
    case 1:
    {
        std::unique_ptr<Expression> e1=random_expression();
        std::unique_ptr<Expression> e2=random_expression();
        return std::unique_ptr<Expression> {new Add(std::move(e1),std::move(e2))};
    }
    case 2:
        std::unique_ptr<Expression> e1=random_expression();
        std::unique_ptr<Expression> e2=random_expression();
        return new Multiply(e1,e2);
    }

    return nullptr;
}



int main(){

  /*  Expression* l1 = new Literal(4);
    Expression* l2 = new Literal(1.2);
    Expression* l3 = new Literal(4.3);
    Expression* s= new Add (l1, l2);
    Expression* m=new Multiply(s, l3);

    auto e=random_expression();
    std::cout<<m->eval()<<std::endl;*/

    auto e=random_expression();
}
