#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the number of row: ";
    cin >> n;
    cout << endl;
    int row = 1;
    while (row<=n) {
        int col = 1;
        while (col<=row) {
            cout<< "* ";
            col ++;
        }
        cout<<"\n";
        row++;
    }
}