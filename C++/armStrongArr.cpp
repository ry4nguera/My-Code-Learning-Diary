#include<iostream>
int main(){
    int size=0, num=0, temp=0, digit=0, sum=0, i=0, j=0;
    std::cout<<"Enter the size of array: ";
    std::cin>>size;
    int arr[size];
    for(i=0;i<size;i++){
        std::cout<<"Enter the element "<<i+1<<": ";
        std::cin>>arr[i];
    }
    std::cout<<"Inputted array is: ";
    for(i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }

    for(i=0;i<size;i++){
        temp = arr[i];
        sum = 0;
        while(temp>0){
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if(sum==arr[i]){
            std::cout<<std::endl<<arr[i]<<" is an Armstrong number!";
        }
    }
    return 0;
}