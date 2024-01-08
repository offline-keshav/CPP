#include <iostream>
using namespace std;

int main() {
    
    int sum=0;
    int n;
    cout<<"Enter the number";
    cin>>n;
    
    for (int a = 1 ; a<=n ; a++) {
        sum +=a;
    }
    cout<<sum<<endl;
}