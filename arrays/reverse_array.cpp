#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int i = 0;
    int j = n-1;

    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++; j--;
    }

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

    cout << "Original Array" << endl;
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    reverseArray(arr,n);
    cout << "Reversed Array" << endl;

    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}