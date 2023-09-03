#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int mynumber;
    int herno;
    double ourno;

    // can also use std::endl
    cout << "Enter a number:\n";
    cin >> mynumber;
    cout << "Your number is: " << mynumber << endl;

    cin >> herno >> mynumber;
    cout << "your new numbers are: " << herno << mynumber << "respectively" << endl;

    cout << "Enter a float: " << endl;
    cin >> ourno;
    cout << "Your float is: " << ourno << endl;

    return 0;
}