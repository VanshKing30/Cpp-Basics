#include<iostream>
using namespace std;
int main() {

    cout << "This program will return you the remainder of the two digits recieved by user." << endl;
    cout << "Enter the first number" << endl;
    int a;
    cin >> a;
    cout << "Enter the second number" <<endl;
    int b;
    cin >> b;
    int c = a%b;
    cout << "The reaminder: " << c <<endl;
}