#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter a number : ";
    cin >> amount;

    int rs100 = 0; int rs50 = 0; int rs20 = 0; int rs10 = 0; int rs1 = 0;
    
    switch (1)
    {
    case 1 : rs100 = amount/100;
        amount = amount%100;
    case 2: rs50 = amount/50;
        amount = amount%50;
    case 3: rs20 = amount/20;
        amount = amount%20;
    case 4: rs10 = amount/10;
        amount = amount%10;
    case 5: rs1 = amount/1;
        amount = amount%1;
        break;
    }

    cout << "100 Rs. Notes : " << rs100 << endl;
    cout << "50 Rs. Notes : " << rs50 << endl;
    cout << "20 Rs. Notes : " << rs20 << endl;
    cout << "10 Rs. Notes : " << rs10 << endl;
    cout << "1 Rs. Coin : " << rs1 << endl;
    cout << "Amount left : " << amount;

    return 0;
}
