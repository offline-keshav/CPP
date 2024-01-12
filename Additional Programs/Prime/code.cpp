#include <iostream>
using namespace std;

bool isPrime(int n) {
    for(int i=2; i<=n-1 ; i++) {
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}


int main() {

    int n;
    cout<<"Enter the number to check whether it's prime or not";
    cin>>n;
    


    if (isPrime(n)) {
        cout<<"the number is prime";
    }
    else {cout<<"the number is not prime";}

}
