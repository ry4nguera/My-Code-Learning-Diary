///Sir, here is the file attached for automorphic checking.
// Since I didn't complete it earlier, I've now worked on it using VS Code.
// Please find the code below and am using std:: etc.


#include<iostream>
int main(){
    int size = 0, i = 0, square = 0, count = 0, temp = 0;
    std::cout<<"How many numbers you want to check: ";
    std::cin>>size;
    int *arr = new int[size];
    for(i=0;i<size;i++){
        std::cout<<"Enter the #"<<i+1<<" number: ";
        std::cin>>arr[i];
    }

    std::cout<<"Inputted Numbers Are: ";
    for(i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }

    for(i=0;i<size;i++){
        temp=arr[i];
        square = arr[i] * arr[i];
        count=0;
        while(temp > 0){
            temp = temp / 10;
            count++;
        }
        if(count == 1){
            if(square % 10 == arr[i]){
                std::cout<<std::endl<<arr[i]<<" is an Automorphic Number!";
            }else{
                std::cout<<std::endl<<arr[i]<<" is not an Automorphic Number!";
            }
        }else if(count == 2){
            if(square % 100 == arr[i]){
                std::cout<<std::endl<<arr[i]<<" is an Automorphic Number!";
            }else{
                std::cout<<std::endl<<arr[i]<<" is not an Automorphic Number!";
            }
        }else if(count == 3){
            if(square % 1000 == arr[i]){
                std::cout<<std::endl<<arr[i]<<" is an Automorphic Number!";
            }else{
                std::cout<<std::endl<<arr[i]<<" is not an Automorphic Number!";
            }
        }else if(count == 4){
            if(square % 10000 == arr[i]){
                std::cout<<std::endl<<arr[i]<<" is an Automorphic Number!";
            }else{
                std::cout<<std::endl<<arr[i]<<" is not an Automorphic Number!";
            }
        }else{
            std::cout<<std::endl<<"Only 4 digit numbers are allowed!";
        }
    }
    delete[] arr;
    return 0;
}