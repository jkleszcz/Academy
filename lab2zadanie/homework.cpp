#include<iostream>

void swap2ints(int *a, int *b){
    int tmpInt = *a;
    *a = *b;
    *b = tmpInt;
}

void f2(){
#define TBL_SIZE 2
    long i = 0;
    std::cout << "i address: " << &i << std::endl;
    long lArr[TBL_SIZE] = {7, 15};
    std::cout << "[0] address: " << &(lArr[0]) << std::endl;
    std::cout << "[1] address: " << &(lArr[1]) << std::endl;
    std::cout << "[1] address: " << (&(lArr[1])+1) << std::endl;
        std::cout << "[1] address: " << *((&(lArr[1])+1)) << std::endl;
    for (i = 0; i <= TBL_SIZE; ++i) {
        /*std::cout << i << std::endl;
        std::cout << lArr[TBL_SIZE - 1] << std::endl;
        std::cout << &lArr[TBL_SIZE - 1] << std::endl;
        std::cout << (&lArr[TBL_SIZE - 1] - i) << std::endl;
        std::cout << *(&lArr[TBL_SIZE - 1] - i) << std::endl;*/
        *(&lArr[TBL_SIZE - 1] - i) = 0;
        //std::cout << "******************" << std::endl;
    }
}

void printIntsFromRawMem(const char *pCh, int size){
    int singleByte = 0;
    for(int i=0 ; i<size ; ++i){
        singleByte = pCh[0+i];
        std::cout << singleByte;
    }
}

void castDemo1(){
    long lN = 578437695752307201;
    std::cout << "sizeof(long) = " << sizeof(long) << std::endl;
    std::cout << lN << " as a byte stream = ";
    printIntsFromRawMem((char *) &lN, sizeof(lN));
    std::cout << std::endl;
}

void castDemo2(){
    int ia1[2] = {84281096, 16909060};
    std::cout << "int ia1[2] = {84281096, 16909060} as a byte stream = ";
    printIntsFromRawMem((char *) ia1, 8);
    std::cout << std::endl;

    int ia2[2] = {67305985, 134678021};
    std::cout << "int ia2[2] = {67305985, 134678021} as a byte stream = ";
    printIntsFromRawMem((char *) ia2, 8);
    std::cout << std::endl;
}

void castDemo3()
{
    float dN = 1.5399896E-36;
    std::cout << dN << " as a byte stream = ";
    printIntsFromRawMem((char *) &dN, 4);
    std::cout << std::endl;
}

struct IEEE754
{
    unsigned int mantissa: 23,
                 exponent: 8,
                 sign : 1;
};

void castDemo4()
{
    float dN = 1.5399896E-36;

    std::cout << "sizeof(struct IEEE754) = " << sizeof(struct IEEE754) << std::endl;
    std::cout << dN << " decomposed with the use of bitfields: ";

    struct IEEE754 *pI3E754 = (struct IEEE754 *) &dN;
    std::cout << "sign = " << pI3E754->sign
         << ", exponent = " << pI3E754->exponent
         << ", mantissa = " << pI3E754->mantissa << std::endl;
}
