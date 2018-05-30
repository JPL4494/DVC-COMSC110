//Assignment 28
//Josh Long
//CS-110

#include <iostream>
#include<string>

using namespace std;

void display()
{
    for (int star = 0; star < 30; star++)
        {
            cout << ('*');
        }
        cout << endl;

        return;

}

int main()
{
    string name, address, city;

    cout << "This program will ask you for your name, address, city, state and ZIP code" << endl << "then it will display it in a certain fashion\n\n\n";
    cout << "Enter full name: ";
    getline (cin, name);

    cout << "Enter address: ";
    getline (cin, address);

    cout << "Enter City, State, and ZIP: ";
    getline (cin, city);

    cout << endl << endl;
    display();
    cout << name << endl;
    cout << address << endl;
    cout << city << endl;
    display();

    return 0;
}
