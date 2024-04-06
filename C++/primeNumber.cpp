#include <iostream>
int main(){
    int num=0,count=0;
    std::cout<<"Enter an number: ";
    std::cin>>num;

    for(int i=2;i<=num/2;i++){
      if(num%i==0){
        count++;
      }
    }

    if(count==0){
        printf("Number is prime!");
    }else{
         printf("Number is not prime!");
    }
    return 0;
}