#include<iostream>
int main(){
    int i=0, j=0, count=0;
    int arr[10] = { 6, 7, 7, 5, 8, 4, 9, 20, 87, 53 };
    system("clear");
    std::cout<<"Inputted array is: ";
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        int flag=0;
        std::cout<<arr[i]<<" ";
        for(j=2;j<=arr[i]/2;j++){
            if(arr[i]%j==0){
                flag = 1;
            }
        }
        if(flag==0){
            count++;
        }
    }
    std::cout<<"There are total "<<count<<" prime numbers are in array!";
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        int flag=0;
        for(j=2;j<=arr[i]/2;j++){
            if(arr[i]%j==0){
                flag = 1;
            }
        }
        if(flag==0){
            arr[i]=count;
        }
        std::cout<<arr[i]<<" ";
    }
    return 0;
}