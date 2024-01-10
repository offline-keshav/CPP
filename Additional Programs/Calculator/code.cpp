#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the first number" << endl;
    cin >> a;
    cout << "Enter the second number" << endl;
    cin >> b;

    char op;
    cout << "Enter the operator" << endl;
    cin >> op;

    int ans;

    switch (op)
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '*':
        ans = a * b;
        break;
    case '/':
        ans = a / b;
        break;

    default:
        cout << "The Operator was invalid" << endl;
        break;
    }

    cout << "The Answer is " << ans << endl;
}