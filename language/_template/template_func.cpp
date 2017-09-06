//
// Created by leagan on 18/07/2017.
#include <iostream>

template <typename T>
void swap(T& a,T& b){
    T tem = a;
    a=b;
    b=tem;
}
void swap2(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(int argc,char** argv){
    int a=10;
    int b=20;
    swap(a,b);
    // swap2(&a,&b);
    double da=3.3;
    double db=4.4;
    swap(da,db);
    std::cout<< a<<b<<std::endl;
    std::cout<< da<<db<<std::endl;
    return 0;
}

