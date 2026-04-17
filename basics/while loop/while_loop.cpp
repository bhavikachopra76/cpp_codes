#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int x = 1;
    while (x <= n)
    {
        cout << x << " ";
        x = x + 1;
    }
    return 0;
}