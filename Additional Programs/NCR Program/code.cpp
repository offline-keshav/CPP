#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int ncr(int n, int r){
    int num= factorial(n);
    int denom = factorial(r)*factorial(n-r);

    int ncr= num/denom;
    return ncr;
} 

int main()
{
    cout << "Enter the n in NCR : ";
    int n;
    cin >> n;
    cout << "Enter the r in NCR : ";
    int r;
    cin >> r;
    int ans = ncr(n,r);
    cout<<ans;
    
}


