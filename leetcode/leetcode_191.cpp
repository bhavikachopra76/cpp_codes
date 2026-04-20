#include <iostream>
using namespace std;

int hammingWeight(int n) {
    int set_bits = 0;
    while (n)
    {
        if (n&1)
        {
            set_bits++;
        }
        n = n >> 1;
    }
    return set_bits;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << hammingWeight(n) << endl;

    return 0;
}
