#include <iostream>
using namespace std;

//function definition
int power(int a, int b) //parameters
{
    int ans = 1;

    for (int i=1; i<=b; i++)
    {
        ans = ans * a;
    }

    return ans; //return statement
}

int main()
{
    int a,b;
    cout << "Enter number : ";
    cin>>a;
    cout << "Enter power :  ";
    cin>>b;

    //function call
    int ans = power(a,b); //arguments
    cout << ans << endl;

    return 0;
}