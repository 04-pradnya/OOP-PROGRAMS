#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
    string brand;
    int price;

public:
    // Member function to accept input
    void input()
    {
        cout << "Enter brand: ";
        cin >> brand;

        cout << "Enter price: ";
        cin >> price;
    }

    // Member function to display details
    void display()
    {
        cout << "\nVehicle Details" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Vehicle v;

    v.input();
    v.display();

    return 0;
}