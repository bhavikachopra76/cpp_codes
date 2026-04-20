#include <iostream>
using namespace std;

int globalHealth = 100;

int main()
{
    int globalHealth = 20;
    cout << globalHealth << endl; // local scope variable
    cout << ::globalHealth << endl; // global scope variable 
    return 0;
}