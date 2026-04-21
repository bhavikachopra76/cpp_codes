#include<iostream>
using namespace std;

// The time complexity of this code is O(log n)
bool isPowerOfTwo(int n) {
    if (n<=0)
    {
        return false;
    }

    if (n == 1)
    {
        return true;
    }
    bool isPower = false;
    int set_bits = 0;
    while (n)
    {
        int bit = n&1;
        if (bit)
        {
            isPower = true;
            set_bits++;
        }
        n = n >> 1;
    }

    if (isPower && set_bits == 1)
    {
        return true;
    }
    return false;
}

// we can also solve this question like this with the time complexity of O(1)
// bool isPowerOfTwo(int n)
// {
//     if (n <= 0)
//     {
//         return false;
//     }
//     return (n & (n-1)) == 0;
// }


int main()
{
    int n;
    cout << "Enter a number : ";
    cin>>n;

    cout << isPowerOfTwo(n);

    return 0;
}
