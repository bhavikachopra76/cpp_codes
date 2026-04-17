#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    bool flag = true;

    if (n <= 1)
    {
        flag = false;
    }

    int x = 2;
    int limit = static_cast<int> (sqrt(n));
    while (x <= limit)
    {
        if (n % x == 0)
        {
            flag = false;
            break;
        }
        x = x + 1;
    }

    if (flag)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not Prime Number" << endl;
    }
    return 0;
}

