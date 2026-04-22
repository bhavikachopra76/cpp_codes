#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin>>num1;
    cout << "Enter second number: ";
    cin>>num2;

    char op;
    cout << "Enter an operator : ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " : " << num1+num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " : " << num1-num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " : " << num1*num2;
        break;
    case '/':
        cout << num1 << " / " << num2 << " : " << num1/num2;
        break;
    case '%':
        cout << num1 << " % " << num2 << " : " << num1%num2;
        break;
    default:
        cout << "Invalid Operator";
    }

    return 0;
}