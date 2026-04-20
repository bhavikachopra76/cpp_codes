#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin>>n;

    int binary = 0;
    int multiplier = 1;
    while (n)
    {
        int bit = n&1;
        binary = bit * multiplier + binary;
        n = n/2;
        multiplier = multiplier * 10;
    }

    cout << binary;
    return 0;
}

// ------ Approach 2 ------
// int main()
// {
//     int n;
//     cout << "Enter a number : ";
//     cin>>n;
//
//     int binary = 0;
//     int multiplier = 1;
//     while (n)
//     {
//         int rem = n%2;
//         binary = rem * multiplier + binary;
//         n = n/2;
//         multiplier = multiplier * 10;
//     }
//
//     cout << binary;
//
//     return 0;
// }