#include <iostream>
using namespace std;

void swapAlternates(int arr[] , int n)
{
    int i = 0;
    int j = i+1;

    while (j<n)
    {
        swap(arr[i], arr[j]);
        i+=2;
        j+=2;
    }
}

int main()
{
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[100];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout << "Original Array : " <<endl;
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    swapAlternates(arr,n);

    cout << endl;
    cout << "Modified Array : " << endl;
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}