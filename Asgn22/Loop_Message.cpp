//Assignment 22
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    string message;
    int repeat, total;

    cout << "This program will repeat a message to you however many times you want\n\n";

    cout << "Enter message: " << endl;
    getline (cin, message);

    cout << "How many times do you want it repeated?" << endl;
    cin >> total;

    for (repeat = 0; repeat < total; repeat++)
    {
        cout << message << endl;
    }

    cout << endl << "Bye!" << endl << endl;

}
