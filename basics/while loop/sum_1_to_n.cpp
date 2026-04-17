#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int x = 0;
    int sum = 0;
    while (x <= n)
    {
        sum = sum + x;
        x = x + 1;
    }
    cout << sum;
    return 0;
}