//Client file
//******************************************************************
//
//   Programador : Isamar López Rodríguez 
//   Archivo     : dectobin.cpp           Fecha : 2/11/16
//
//******************************************************************
//    Propósito :This file contains the client file for a program
//    that recieves a decimal and gives its binary form instead.
//
//******************************************************************

#include <iostream>
#include "stack.h"

using namespace std;

//input validation for dec parameter
int getDec(){
    int input;
    cout << "Input positive decimal integer: ";
    cin >> input;
    while(input <= 0){
        cout << "Input positive decimal integer: ";
        cin >> input;
    }
    return input;
}


template<class Type>
void displayStack(stack<Type>, int);

template<class Type>
void fillStack(stack<Type>&, int);

int main(){
    stack <int> ms;

    int decimal = getDec();
    fillStack(ms, decimal);
    displayStack(ms, decimal);
    ms.print();

    return 0;
}

//Fills the stack with the values
template<class Type>
void fillStack(stack<Type>& binst/*bin stack*/, int decimal){
    while(decimal != 0){
        binst.push(decimal%2);
        decimal /= 2;
    }
}

//displays what is in the stack
template<class Type>
void displayStack(stack<Type> stack, int decimal){
    cout << "Decimal " << decimal
         << " equal to ";

    while(!stack.empty()){

        cout << stack.top();
        stack.pop();
    }
}
