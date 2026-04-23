#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    int prev = 1;
    int prev_prev = 0;

    int current = 0;
    for (int i = 2; i<=n; i++)
    {
        current = prev + prev_prev;
        prev_prev = prev;
        prev = current;
    }

    return current;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << n << " fibonacci number is " << fib(n) << endl;

    return 0;
}