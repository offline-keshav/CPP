#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int n1, n20, n50, n100;
    n1 = n20 = n50 = n100 = 0;

    if (amount >= 100)
    {
        n100 = amount / 100;
        cout << "100 = " << n100 << endl;
        amount -= (100 * n100);
    }
    if (amount >= 50)
    {
        n50 = amount / 50;
        cout << "50 = " << n50 << endl;
        amount -= (50 * n50);
    }
    if (amount >= 20)
    {
        n20 = amount / 20;
        cout << "20 = " << n20 << endl;
        amount -= (20 * n20);
    }
    if (amount >= 1)
    {
        n1 = amount / 1;
        cout << "1 = " << n1 << endl;
        amount -= (1 * n1);
    }

    return 0;
}
