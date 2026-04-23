#include <iostream>
#include <cmath>
using namespace std;

bool primeOrNot(int n)
{
    if (n <= 1)
    {
       return false;
    }

    int x = 2;
    int limit = static_cast<int> (sqrt(n));
    while (x <= limit)
    {
        if (n % x == 0)
        {
            return false;
        }
        x = x + 1;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if (primeOrNot(n))
    {
        cout << n << " is a prime number" << endl;
    }else
    {
        cout << n << " is not a prime number" << endl;
    }

    return 0;
}