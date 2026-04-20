#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin>>n;

    for (int i = 31; i>=0; i--)
    {
        int shiftedBit = n >> i;
        int finalBit = shiftedBit & 1;

        cout << finalBit;

        if (i%8 == 0){cout << " ";}
    }

    return 0;
}