// 1234
//  234
//   34
//    4
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
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        int col = 1;
        int start = row;
        while (col <= n-row+1)
        {
            cout << start;
            start = start + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}