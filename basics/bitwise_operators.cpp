#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;
    // bitwise AND (&)
    cout << "a&b = " << (a & b) << endl;
    // bitwise OR (|)
    cout << "a|b = " << (a | b) << endl;
    // bitwise XOR (^)
    cout << "a^b = " << (a^b) << endl;
    // bitwise NOT (~)
    cout << "~a = " << ~a << endl;
    // left shift (<<)
    cout << "7 << 2 = " << (7 << 2) << endl;
    // right shift (>>)
    cout << "12 >> 1 = " << (12 >> 1) << endl;
    return 0;
}
