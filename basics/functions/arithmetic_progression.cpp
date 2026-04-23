#include <iostream>
using namespace std;

int arithmeticProgression(int n)
{
    return 3*n + 7;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << arithmeticProgression(n) << endl;

    return 0;
}
