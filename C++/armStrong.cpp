#include<iostream>
int main(){
    int num=0, temp=0, digit=0, sum=0;
    std::cout<<"Enter a number: ";
    std::cin>>num;
    temp = num;
    while(num > 0){
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }
    if(sum==temp){
        std::cout<<"Armstrong number!";
    }else{
        std::cout<<"Not an Armstrong number!";
    }
    return 0;
}