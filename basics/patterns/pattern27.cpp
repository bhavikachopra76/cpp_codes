#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;

    int  row = 1;
    while (row <= n)
    {
        int col = 1;
        int start = 1;
        while (col <= n-row+1)
        {
            cout << start;
            start = start + 1;
            col = col + 1;
        }

        if (row >= 2)
        {
            int star = row + (row - 2);
            while (star)
            {
                cout<<"*";
                star = star - 1;
            }
        }

        int strt = n-row+1;
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