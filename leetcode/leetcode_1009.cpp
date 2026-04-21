#include <iostream>
using namespace std;

int bitwiseComplement(int num) {

    if (num == 0)
    {
        return 1;
    }

    int m = num;
    int mask = 0;

    while (m)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int complement = ~(num) & mask;
    return complement;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << bitwiseComplement(n);

    return 0;
}