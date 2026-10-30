#include <iostream>
using namespace std;

// Function to copy one string into another
void copyString(char source[], char destination[])
{
    int i = 0;

    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}

int main()
{
    char source[100], destination[100];

    cout << "Enter a string: ";
    cin.getline(source, 100);

    copyString(source, destination);

    cout << "Original String: " << source << endl;
    cout << "Copied String: " << destination;

    return 0;
}
