#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    int row = 1;
    while (row<=n) {
        int col = 1;
        char ch = 'A'+row-1;
        while (col<=n) {
            cout<<ch<<" ";
            ch++;
            col++;

        }
        row++;
        cout<<"\n";
    }
}