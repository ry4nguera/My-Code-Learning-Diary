#include<iostream>
int main(){
    int a = 10;
    int *ptrOfa = &a;

    std::cout<<"Value in a is: " <<a<<std::endl;
    std::cout<<"Address of a is: " <<ptrOfa<<std::endl;

    int *b = &a;
    std::cout<<"Value in b is: " <<b<<std::endl;

    int *ptrOfb = b;
    std::cout<<"Value in ptrOfb is: " <<ptrOfb<<std::endl;

    int c = *ptrOfb;

    std::cout<<"Value in b is: " <<c<<std::endl;

    int *ptrOfc = &c;
    std::cout<<"Value in ptrOfc is: " <<ptrOfc<<std::endl;

    int d = *ptrOfc;
    std::cout<<"Value in d is: " <<d<<std::endl;

    return 0;
}