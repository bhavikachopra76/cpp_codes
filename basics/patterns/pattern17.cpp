// A
// B C
// C D E
// D E F G

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
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + (row + col - 2);
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}

//other way to do this pattern
// #include<iostream>
// using namespace std;
//
// int main()
// {
//     int n;
//     cout << "Enter a number : " << endl;
//     cin >> n;
//
//     int row = 1;
//
//     while (row <= n)
//     {
//         int col = 1;
//         char start = 'A' + row - col;
//         while (col <= row)
//         {
//             cout << start << " ";
//             start = start + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//
//     return 0;
// }