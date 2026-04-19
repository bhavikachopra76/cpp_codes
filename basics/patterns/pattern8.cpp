// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;

    int row = 1;
    int count = 1;

    while (row<=n)
    {
        int col = 1;
        while (col<=row)
        {
            cout << count << " ";
            count++;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}