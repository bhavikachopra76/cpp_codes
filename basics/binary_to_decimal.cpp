#include <chrono>
#include <iostream>
using namespace std;

int main()
{
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int multiplier = 1;
    int decimal = 0;
    while (binary)
    {
        int digit = binary%10;
        decimal = decimal + (digit * multiplier);
        multiplier = multiplier * 2;
        binary = binary/10;
    }

    cout << decimal;

    return 0;
}
