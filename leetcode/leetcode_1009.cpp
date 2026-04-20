#include <iostream>
using namespace std;

int bitwiseComplement(int n) {

    //5 -> 101 -> 010

    int binary = 0;

    while (n) //1
    {
        int bit = n^1;
        cout<<bit<<endl;
        binary = binary * 10 + bit;
        cout << binary << endl;
        n = n>>1;
        cout << n;
    }

    return binary;
}

int main()
{
    int n;
    cout<< "Enter a number: ";
    cin>>n;

    cout << bitwiseComplement(n);

    return 0;
}
