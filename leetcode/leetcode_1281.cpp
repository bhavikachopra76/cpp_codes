#include <iostream>
using namespace std;

int subtractProductAndSum(int n) {
    int prod = 1;
    int sum = 0;
    int temp = n;

    while(temp){
        int rem = temp%10;
        prod = prod * rem;
        sum = sum + rem;
        temp = temp/10;
    }
    int result = prod - sum;
    return result;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<subtractProductAndSum(n);
}
