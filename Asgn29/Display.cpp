//Assignment 29
//Josh Long
//CS-110

#include <iostream>
#include<string>

using namespace std;

void display1 (char ch1, int first)
{
    for (int top = 0; top < first; top++)
        {
            cout << ch1;
        }
        cout << endl;
        return;
}

void display2 (char ch2, int last)
{
    for (int bottom = 0; bottom < last; bottom++)
        {
            cout << ch2;
        }
        cout << endl;
        return;
}

int main()
{
    string name, address, city;
    int first, last;
    char ch1, ch2;

    cout << "This program will ask you for your name, address, city, state and ZIP code" << endl << "then it will display it in a certain fashion on what you choose\n\n\n";

    cout << "Enter the character that you want displayed before the information: ";
    cin >> ch1;

    cout << "And how many you want displayed: ";
    cin >> first;
    cin.ignore();
    cout << "Enter full name: ";
    getline (cin, name);

    cout << "Enter address: ";
    getline (cin, address);

    cout << "Enter City, State, and ZIP: ";
    getline (cin, city);

    cout << "Enter the ending character you want: ";
    cin >> ch2;

    cout << "And how many times you want it displayed: ";
    cin >> last;

    cout << endl << endl;
    display1(ch1, first);
    cout << name << endl;
    cout << address << endl;
    cout << city << endl;
    display2(ch2, last);

    return 0;
}
