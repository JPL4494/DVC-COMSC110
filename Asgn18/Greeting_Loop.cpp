//Assignment 18
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    int amount, count;
    string greeting;

    cout << "This program will display a greeting or phrase a specified number of times.\n\n";
    cout << "Type in the message here: ";
    getline (cin, greeting);

    cout << "And the number of times you want it repeated here: ";
    cin >> amount;
    cout << endl;

    count = 0;

    while (count < amount)
    {
        cout << greeting << endl;

        count = count + 1;
    }
}
