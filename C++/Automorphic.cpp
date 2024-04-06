#include<iostream>
int main(){
    int num = 0, square = 0, count = 0;

    std::cout<<"Enter the number: ";
    std::cin>>num;

    int temp = num;

    square = num * num;
    while(temp > 0){
        temp = temp / 10;
        count++;
    }
   
   if(count == 1){
         if(square % 10 == num){
              std::cout<<"Automorphic Number!";
         }else{
              std::cout<<"Not Automorphic Number!";
         }
   }else if(count == 2){
         if(square % 100 == num){
              std::cout<<"Automorphic Number!";
         }else{
              std::cout<<"Not Automorphic Number!";
         }
   }else if(count == 3){
         if(square % 1000 == num){
              std::cout<<"Automorphic Number!";
         }else{
              std::cout<<"Not Automorphic Number!";
         }
   }else if(count == 4){
         if(square % 10000 == num){
              std::cout<<"Automorphic Number!";
         }else{
              std::cout<<"Not Automorphic Number!";
         }
   }else{
            std::cout<<"Only 4 digit numbers are allowed!";
   }
    return 0;
}