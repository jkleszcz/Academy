//
// Created by usuryjskij on 11.05.18.
//

#include <map>

int powNtoK(int n, int k){
    if(k == 1)
        return n;
    return (n*powNtoK(n, k-1));
}

long fibbonacci(int n){
    if(n <= 1)
        return n;
    return fibbonacci(n-1) + fibbonacci(n-2);
}

long fibboCached(int n){
    if(n <= 1)
        return n;
    else{
        static std::map<int,long> fib;
        auto fibN = fib.find(n);
        long fibValue;
        if(fibN == fib.end()){
            fibValue = fibboCached(n-1) + fibboCached(n-2);
            fib[n] = fibValue;
        }else{
            fibValue = fibN->second;
        }
        return fibValue;
    }
}