#include <iostream>

using namespace std;

int main()
{

    char my_middle_initial{'G'};

    cout << "Your middle initial is: " << my_middle_initial << endl;

    long long random_number{7'600'000'000};

    cout << "Your random number is: " << random_number << endl;

    float random_decimal{3.142};
    cout << "Your float is: " << random_decimal << endl;

    long double large_random_decimal{2.84e130};
    cout << large_random_decimal << " is a large number am I right?" << endl;

    return 0;
}