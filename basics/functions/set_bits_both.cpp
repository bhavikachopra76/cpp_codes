#include <iostream>
using namespace std;

int setBits(int x)
{
    int set_bits = 0;
    while (x)
    {
        int bit = x&1;
        if (bit)
        {
            set_bits++;
        }
        x = x >> 1;
    }
    return set_bits;
}

int main()
{
    int a,b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;


    int total_set_bits = setBits(a) + setBits(b);
    cout << total_set_bits;

    return 0;
}
