#include <iostream>
using namespace std;

int main () {
    cout << "Enter a character:"<< endl;
    char value;
    cin >> value;
    if (value>='a' && value<='z') {
        cout<< "The character is lower case." << endl;
    } else if (value>='A' && value<='Z') {
        cout<< "The character is Upper case." << endl;
    } else if(value>='1' && value<='9' ){
        cout<< "The character is Number" << endl;
    } else {
        cout<< "The character is something else" << endl;
    }


}