//Write an c++ program to to filter out the number, characters and symbols in an string array and create the new array of them with allocate each through dynamic memory
#include<iostream.h>
#include<conio.h>
void main(){
	int i=0;
	char str[50];
	clrscr();
	cout<<":----------[ ARRAY FILTERING ]-----------"<<endl;

	cout<<"Enter the string: ";
	cin.getline(str,50);

	cout<<"Inputted String Is: ";
	for(i=0;i<str[i]!='\0';i++){
		cout<<str[i];
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

	cout << endl << "Total Nums: " << numCount << endl << "Total Char: " << charCount << endl << "Total Symbols: " << symbolCount;

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

    cout << endl << "Done!";

    cout << endl << "Numbered Array Is: ";
    for (i = 0; i < numCount; i++) {
        cout << numArr[i] << " ";
    }

    cout << endl << "Character Array Is: ";
    for (i = 0; i < charCount; i++) {
        cout << charArr[i] << " ";
    }

    cout << endl << "Symbol Array Is: ";
    for (i = 0; i < symbolCount; i++) {
        cout << symArr[i] << " ";
    }

    delete[] numArr;
    delete[] charArr;
    delete[] symArr;
	getch();
}





