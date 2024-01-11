#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;

    cout << "How many small rooms would you like cleaned? ";
    int number_of_small_rooms{0};
    cin >> number_of_small_rooms;

    cout << "How many large rooms would you like cleaned? ";
    int number_of_large_rooms{0};
    cin >> number_of_large_rooms;

    const double price_per_small_room{25.0};
    const double price_per_large_room{35.0};
    const double sales_tax{0.06};
    const int estimate_expiry{30};

    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms;
    cout << "Number of large rooms: " << number_of_large_rooms;

    int cost = (number_of_small_rooms * price_per_small_room) + (number_of_large_rooms * price_per_large_room);
    cout << "Cost: $" << cost << endl;

    double tax = cost * sales_tax;
    cout << "Tax: $" << tax << endl;

    cout << "========================" << endl;
    cout << "Total estimate: $" << cost + tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days " << endl;

    return 0;
}