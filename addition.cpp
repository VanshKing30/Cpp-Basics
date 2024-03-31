//For Addition of two numbers i am using functions 
#include <iostream>
using namespace std;

// function to add two numbers
int add(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2, sum;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // calling the add function and storing the result in sum
    sum = add(num1, num2);
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    return 0;
}
