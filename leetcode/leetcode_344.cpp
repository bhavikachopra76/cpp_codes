#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int n = s.size();
    int i = 0;
    int j = n-1;

    while (i <= j)
    {
        swap(s[i], s[j]);
        i++; j--;
    }
}

int main()
{
    int n;
    cout << "Enter size of vector : ";
    cin >> n;

    vector<char>s;

    for (int i=0; i<n; i++)
    {
        char x;
        cin>>x;
        s.push_back(x);
    }

    cout << "Original Array" << endl;
    for (int i=0; i<n; i++)
    {
        cout << s[i] << " ";
    }

    cout << endl;

    reverseString(s);
    cout << "Reversed Array" << endl;

    for (int i=0; i<n; i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}