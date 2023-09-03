#include <iostream>

int main()
{
    int favno;
    std::cout << "What is your favourite number between 1 and 100: ";
    std::cin >> favno;
    std::cout << "Amazing thats my favourite number too!" << std::endl;
    std::cout << "No really, " << favno << " is my favourite number" << std::endl;
    return 0;
}