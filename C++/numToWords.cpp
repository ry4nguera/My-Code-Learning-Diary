#include <iostream>

int main() {
    int num;
    system("clear");
    std::cout<<"====== Num To Words Converter ====="<<std::endl<<std::endl;
    std::cout<<" Enter an number -> ";
    std::cin>>num;
    std::cout<<"Inputed num is: "<<num<<std::endl<<std::endl;

    if(num>=0 && num <= 9){
        if(num==1){
            std::cout<<"One";
        }else if(num==2){
            std::cout<<"Two";
        }else if(num==3){
            std::cout<<"Three";
        }else if(num==4){
            std::cout<<"Four";
        }else if(num==5){
            std::cout<<"Five";
        }else if(num==6){
            std::cout<<"Six";
        }else if(num==7){
            std::cout<<"Seven";
        }else if(num==8){
            std::cout<<"Eight";
        }else if(num==9){
            std::cout<<"Nine";
        }else{
            std::cout<<"Zero";
        }
    }else if(num>=11&&num<20){
        if(num==11){
            std::cout<<"Eleven";
        }else if(num==12){
            std::cout<<"Twelve";
        }else if(num==13){
            std::cout<<"Thirteen";
        }else if(num==14){
            std::cout<<"Fourteen";
        }else if(num==15){
            std::cout<<"Fifteen";
        }else if(num==16){
            std::cout<<"Sixteen";
        }else if(num==17){
            std::cout<<"Seventeen";
        }else if(num==18){
            std::cout<<"Eighteen"; 
        }else{
            std::cout<<"Nineteen";
        }
    }
    return 0;
}
