//Write an c++ program to to filter out the number, characters and symbols in an string array and create the new array of them with allocate each through dynamic memory
#include<iostream>
//#include<conio.h>
int main(){
	int i=0;
	char str[50];
	//clrscr();
	std::cout<<":----------[ ARRAY FILTERING ]-----------"<<std::endl;

	std::cout<<"Enter the string: ";
	std::cin.getline(str,50);

	std::cout<<"Inputted String Is: ";
	for(i=0;i<str[i]!='\0';i++){
		std::cout<<str[i];
	}

	int numCount = 0, charCount = 0, symbolCount = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            numCount++;
        } else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || str[i] == ' ') {
            charCount++;
        } else {
            symbolCount++;
        }
    }

	std::cout << std::endl << "Total Nums: " << numCount << std::endl << "Total Char: " << charCount << std::endl << "Total Symbols: " << symbolCount;

    char *numArr = new char[numCount];
    char *charArr = new char[charCount];
    char *symArr = new char[symbolCount];


	int n = 0, c = 0, s = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            numArr[n] = str[i];
            n++;
        } else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || str[i] == ' ') {
            charArr[c] = str[i];
            c++;
        } else {
            symArr[s] = str[i];
            s++;
        }
    }

    std::cout << std::endl << "Done!";

    std::cout << std::endl << "Numbered Array Is: ";
    for (i = 0; i < numCount; i++) {
        std::cout << numArr[i] << " ";
    }

    std::cout << std::endl << "Character Array Is: ";
    for (i = 0; i < charCount; i++) {
        std::cout << charArr[i] << " ";
    }

    std::cout << std::endl << "Symbol Array Is: ";
    for (i = 0; i < symbolCount; i++) {
        std::cout << symArr[i] << " ";
    }

    delete[] numArr;
    delete[] charArr;
    delete[] symArr;
	//getch();
    return 0;
}





