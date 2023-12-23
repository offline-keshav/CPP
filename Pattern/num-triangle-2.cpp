#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int row = 1;
    int k = 1;
    while (row <= n) {
        int col = 1;
        while (col<=row) {
            cout<<k<<" ";
            k++;
            col++;
        }
        cout<<"\n";
        row++;
    }
}