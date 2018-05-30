//Assignment 18-B
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    int amount, count;
    string greeting;

    cout << "This program will display a greeting or phrase a specified number of times.\n\n";
    cout << "Type in the number of times you want the message repeated: ";
    cin >> amount;
    cout << endl;

    cin.ignore ();

    cout << "And type the actual message here: ";
    getline (cin, greeting);

    count = 0;

    while (count < amount)
    {
        cout << greeting << endl;

        count = count + 1;
    }
}
