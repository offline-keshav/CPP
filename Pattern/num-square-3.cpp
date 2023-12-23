#include <iostream>
using namespace std;

int main() {
    
    
    int i,j,n;
    cout<<"Enter the number of rows and columns: ";
    cin>> n ;
    cout<<"\n";
    i = 1;
    int m = 1;
    while (i<=n) {
        int j = 1;
        while (j<=n) {
            cout<<m<<" ";
            j++;
            m++;
        }
        cout<<"\n";
        i++;
    }
}