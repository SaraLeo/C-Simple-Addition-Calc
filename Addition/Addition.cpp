/* Program adds two number inputs from the user to create a sum */

#include <iostream>
using namespace std;

int main()
{
    int num1;  //first input
    int num2;  //second input
    int sum;  //hold sum

    cout << "Please enter the first number you would like to add" << endl;
    cin >> num1;

    cout << "Please enter the second number you would like to add" << endl;
    cin >> num2;

    sum = num1 + num2;

    cout << num1 << " + " << num2 << " = " << sum << endl;
    
    return 0;
}

