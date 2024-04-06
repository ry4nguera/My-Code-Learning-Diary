#include<iostream>
int main(){
    int num;
    system("clear");
    std::cout<<"Enter an number: ";
    std::cin>>num;

    while(num>0){
        std::cout<<num%2;
        num=num/2;
    }
    return 0;
}