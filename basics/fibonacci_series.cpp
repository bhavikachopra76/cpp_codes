#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int prev_prev = 0;
    int prev = 1;

    cout << prev_prev <<  " " << prev << " ";

    // if we want to print exactly 'n' number series. We already printed '0' and '1', so we end the loop at 'n-2'
    for (int i = 0; i < n-2 ; i++)
    {
        int current = prev + prev_prev;
        cout << current << " ";
        prev_prev = prev;
        prev = current;
    }
    return 0;
}
