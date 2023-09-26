#include <iostream>

using namespace std;

int main()
{
    cout << "Samuels cleaning service" << endl;
    cout << "\nEnter the amount of small rooms you want cleaned: " << endl;
    int no_small_rooms{0};
    cin >> no_small_rooms;
    cout << "\nEnter the amount of large rooms you want cleaned: " << endl;
    int no_large_rooms{0};
    cin >> no_large_rooms;

    cout << "Estimate for carpet cleaning services: " << endl;
    cout << "No of small rooms: " << no_small_rooms << endl;
    cout << "No of large rooms: " << no_large_rooms << endl;

    const double price_small_room{25};
    const double price_large_room{35};
    const double tax{0.06};

    cout << "\nPrice of small rooms: $" << price_small_room << endl;
    cout << "Price of large rooms: $" << price_large_room << endl;

    double cost{(no_small_rooms * price_small_room) + (no_large_rooms * price_large_room)};

    cout << "Cost: $" << cost << endl;

    double applied_tax{cost * tax};

    cout << "Tax: $" << applied_tax << endl;

    const double total_estimate{cost + applied_tax};

    cout << "Total estimate: $" << total_estimate << endl;

    cout << "This estimate is valid for 30 days" << endl;

    return 0;
}
