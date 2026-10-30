#include <iostream>
using namespace std;

// Function to check prime number
void checkPrime(int number)
{
    int count = 0;

    if (number <= 1)
    {
        cout << number << " is not a prime number.";
        return;
    }

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
        cout << number << " is a prime number.";
    else
        cout << number << " is not a prime number.";
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    checkPrime(number);

    return 0;
}
