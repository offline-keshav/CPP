#include <iostream>
using namespace std;
int main(){
    cout<< "Enter a number upto which sum need to be found out:"<< endl;
    int n;
    cin>>n;
    int i = 1;
    int sum = 0;
    while (i<=n) {
        sum = sum + i;
        i+=1;
    }
    cout<<"the sum is:"<<sum<<endl;
}