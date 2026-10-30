
#include <iostream>
using namespace std;

// Class Calculator
class Calculator
{
public:
    // Function to add two integers
    int add(int a, int b)
    {
        return a + b;
    }

    // Function to add two double values
    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator calc;

    cout << "Addition of integers: "
         << calc.add(10, 20) << endl;

    cout << "Addition of decimal numbers: "
         << calc.add(5.5, 2.5) << endl;

    return 0;
}
