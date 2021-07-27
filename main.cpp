#include <iostream>

using namespace std;

int main()
{
    int userInput;
    double num1, num2;
    cout << "Thank you for choosing our calculator!\n";
    cout << "Please enter 1/2/3/4 respectively to do add/subtract/multiply/divide two numbers: ";
    cin >> userInput;

    if(userInput == 1){
    cout << "Adding two numbers!\n";
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    double total = num1 + num2;

    cout << "The total is: " << total;
    }
    else if(userInput == 2){
    cout << "Subtracting second number from first number!\n";
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    double subtract = num1 - num2;

    cout << "The result is: " << subtract;

    }
    else if(userInput == 3){
    cout << "Multiplying two numbers!\n";
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    double multiply = num1*num2;

    cout << "The result is: " << multiply;

    }
    else{
    cout << "Dividing first number by second number!\n";
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    double division = num1/num2;

    cout << "The result is: " << division;

    }

    return 0;
}
