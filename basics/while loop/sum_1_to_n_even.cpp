#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int x = 0;
    int sum = 0;

    while (x <= n)
    {
        if (x % 2 == 0)
        {
            sum = sum + x;
        }
        x = x + 1;
    }
    cout << sum;
    return 0;
}