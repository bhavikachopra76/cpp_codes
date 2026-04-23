#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int num)
{
    for (int i=0; i<n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin>>n;

    int arr[100];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int num;
    cout << "Enter number you want to search : ";
    cin>> num;

    int ans = linearSearch(arr,n,num);

    if (ans<0)
    {
        cout << num << " is not present in the array";
    }else
    {
        cout << num << " is present at index : " << ans;
    }

    return 0;
}
