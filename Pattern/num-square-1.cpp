#include <iostream>
using namespace std;

int main() {
    
    
    int i,j,n;
    cout<<"Enter the number of rows and columns: ";
    cin>> n ;
    cout<<"\n";
    i = 1;

    while (i<=n) {
        int j = 0;
        while (j<n) {
            cout<<i;
            j++;
        }
        cout<<"\n";
        i++;
    }
}