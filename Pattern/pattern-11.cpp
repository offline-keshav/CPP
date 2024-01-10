#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    int row = 1;
    while (row<=n) {
        int col = 1;
        char ch = 'A'+n-row;
        while (col<=row) {
            cout<<ch<<" ";
            col++;
            ch++;
        }
        row++;
        cout<<"\n";
    }
}