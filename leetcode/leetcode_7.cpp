#include <iostream>
#include <cmath>
using namespace std;

int reverse(int x) {

    int temp = x;
    int reverseNum = 0;
    while (temp)
    {
        int rem = temp%10;
        if (reverseNum> INT_MAX/10 || reverseNum < INT_MIN/10)
        {
            return 0;
        }
        reverseNum = reverseNum * 10 + rem;
        temp = temp/10;
    }

    return reverseNum;
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin>>x;

    cout << reverse(x);

    return 0;
}