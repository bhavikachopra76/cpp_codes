// 1 2 3
// 4 5 6
// 7 8 9

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
        while (col<=n)
        {
            cout << count << " ";
            col = col + 1;
            count++;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}