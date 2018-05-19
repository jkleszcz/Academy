#include "expression.h"

std::unique_ptr<Expression> random_expression(){
    cout<<std::rand();
    return nullptr;
}



int main(){

    Expression* l1 = new Literal(4);
    Expression* l2 = new Literal(1.2);
    Expression* l3 = new Literal(4.3);
    Expression* s= new Add (l1, l2);
    Expression* m=new Multiply(s, l3);

    auto e=random_expression();
    std::cout<<m->eval()<<std::endl;
}
