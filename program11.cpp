
#include <iostream>
#include <string>
using namespace std;

// Class Car
class Car
{
    string brand;
    float price;

public:
    // Function to input car details
    void input()
    {
        cout << "Enter car brand: ";
        cin >> brand;

        cout << "Enter car price: ";
        cin >> price;
    }

    // Function to display car details
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Car car1, car2;

    cout << "Enter details of first car:" << endl;
    car1.input();

    cout << "\nEnter details of second car:" << endl;
    car2.input();

    cout << "\nFirst Car Details:" << endl;
    car1.display();

    cout << "\nSecond Car Details:" << endl;
    car2.display();

    return 0;
}
