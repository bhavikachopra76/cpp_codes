 //    1
 //   121
 //  12321
 // 1234321
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        int col = 1;
        int start = 1;
        while (col <= row)
        {
            cout << start;
            start = start + 1;
            col = col + 1;
        }

        int strt = row - 1;
        while (strt)
        {
            cout << strt;
            strt = strt - 1;
        }

        cout << endl;
        row = row + 1;
    }

    return 0;
}
