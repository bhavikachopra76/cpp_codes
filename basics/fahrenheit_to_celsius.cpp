#include <iostream>
using namespace std;
int main()
{
    double f;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;

    double c = (f - 32) / 1.8;
    cout << "Celsius = " << c << endl;
    return 0;
}