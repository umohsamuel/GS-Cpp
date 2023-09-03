#include <iostream>

using namespace std;

int main()
{
    int favno;
    cout << "What is your favourite number between 1 and 100: ";
    cin >> favno;
    cout << "Amazing thats my favourite number too!" << std::endl;
    cout << "No really, " << favno << " is my favourite number" << endl;
    return 0;
}