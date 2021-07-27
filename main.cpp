/**
This is a simple calculator which can do basic
mathematical operations such as addition, subtraction, multiplication
, division and exponential operations.
Author: Abrar Islam
Date: 07/26/2021
**/
#include <iostream>

using namespace std;
//variables
double num1, num2;

/**
This function performs addition
**/
void add(){
    cout << "Adding two numbers!\n";
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
    double total = num1 + num2;

    cout << "The total is: " << total;
}

/**
This function performs subtraction
**/
void subtract(){
    cout << "Subtracting second number from first number!\n";
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    double subtract = num1 - num2;

    cout << "The result is: " << subtract;

}

/**
This function performs multiplication
**/
void multiply(){
    cout << "Multiplying two numbers!\n";
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    double multiply = num1*num2;

    cout << "The result is: " << multiply;
}

/**
This function performs division
**/
void divide(){
    cout << "Dividing first number by second number!\n";
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    double division = num1/num2;

    cout << "The result is: " << division;
}

/**
This function performs division
**/
void exponential(){
   int result = 1;
   cout << "Exponential operations!\n";
    cout << "Enter the base number: ";
    cin >> num1;

    cout << "Enter the power: ";
    cin >> num2;
   for (int i = 0; i < num2; i++){
    result = result * num1;
   }
   cout << "The result is: " << result;

}

int main()
{
    int userInput;

    cout << "Thank you for choosing our calculator!\n";
    cout << "Please enter 1/2/3/4 respectively to add/subtract/multiply/divide/exponent two numbers: ";
    cin >> userInput;

    if(userInput == 1){
    add();
    }
    else if(userInput == 2){
    subtract();
    }
    else if(userInput == 3){
    multiply();
    }
    else if (userInput == 4){
    divide();
    }
    else if (userInput == 5){
    exponential();

    }
    else{
    cout<<"Invalid Entry!! Try again!!";

    }

    return 0;
}
