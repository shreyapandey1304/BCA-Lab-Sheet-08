
#include <iostream>
using namespace std;

// Function to swap two numbers using call by reference
void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Before swapping: " << num1 << " " << num2 << endl;

    swapNumbers(num1, num2);

    cout << "After swapping: " << num1 << " " << num2;

    return 0;
}
