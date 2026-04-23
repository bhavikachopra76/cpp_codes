#include <iostream>
using namespace std;

string even_odd(int n)
{
    if (n%2 == 0)
    {
        return  "even";
    }
    return  "odd";
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin>>n;

    string answer = even_odd(n);
    cout << answer;

    return 0;
}