#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout<<"Enter number of rows: ";
    
    cin>>n;
    
    int row = 1;
    
    while (row<=n) {
        int col = 1;
        int space = n-row;
        while (space) {
            cout<<"  ";
            space--;
        }  

        while (col<=row) {
            //int num = row-1;
            cout<<col<<" ";
            col++;
        }
        
        int print = row-1;

        while (print) {
            cout<<print<<" ";
            print--;
            col++;
        }
        
        row++;
        
        cout<<"\n";


    }
}