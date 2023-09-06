#include <iostream>

using namespace std;

int main()
{

    cout << "Enter a width: ";
    int room_width{0};
    cin >> room_width;

    cout << "Enter a height: ";
    int room_height{0};
    cin >> room_height;

    cout << "The area of the room is: " << room_width * room_height << endl;

    return 0;
}