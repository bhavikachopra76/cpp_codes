#include<iostream>
using namespace std;

bool isPowerOfFour(int n) {
    if(n <= 0){
        return false;
    }

    int set_bits = 0;
    int count = 0;

    while(n){
        //1
        int bit = n&1; //1
        if(bit){
            set_bits = set_bits + 1; //1
        }
        n = n>>1;//0
        count = count + 1; //  3
    }

    if(set_bits == 1 && count%2 != 0){
        return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin>>n;

    cout << isPowerOfFour(n);

    return 0;
}
