#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    int row = 1;
    while (row<n){
        int print = row;
        int col = 1;
        while (col<=row) {
            cout<<print<<" ";
            print++;
            col++;
        }
        row++;
        cout<<"\n";
    }
}