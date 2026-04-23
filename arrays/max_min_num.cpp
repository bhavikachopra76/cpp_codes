#include <iostream>
using namespace std;

int minimum_number(int arr[] , int size)
{
    int mini = INT_MAX;
    for (int i = 0; i<size; i++)
    {
        //there is also a builtin functions for this:
        // mini = min(mini, arr[i])
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}

int maximum_number(int arr[] , int size)
{
    int maxi = INT_MIN;
    for (int i=0; i<size; i++)
    {
        //there is also a builtin functions for this:
        //maxi = max(maxi, arr[i])
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
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

    cout << "Maximum number in array is : " << maximum_number(arr , n) << endl;
    cout << "Minimum number in array is : " << minimum_number(arr , n);

    return 0;
}
