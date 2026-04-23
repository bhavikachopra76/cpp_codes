#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    //Declaring array
    int arr[5];

    //Accessing array

    //Returns garbage value as we have not initialized the array with any values
    cout << "Value at 4th index is : " << arr[4] << endl; // output : Value at 4th index is : 1855393792

    // Initializing array
    int a[5] = {10,20,30,40,50};

    //Again trying to access elements in an array
    cout << "Value at 4th index is : " << a[4] << endl; // output : Value at 4th index is : 50

    int a2[15] = {2,3,4}; // it initializes the remaining values
    printArray(a2,15); // output : 2 3 4 0 0 0 0 0 0 0 0 0 0 0 0

    cout << endl;

    int a3[5] = {0}; // initializes all the values with 0 (this only works with 0)
    printArray(a3,5); // output : 0 0 0 0 0

    cout << endl;

    int a4[5];
    fill_n(a4, 5, 8); // initializes all the values with 'n'
    printArray(a4,5); // output : 8 8 8 8 8
    return 0;
}