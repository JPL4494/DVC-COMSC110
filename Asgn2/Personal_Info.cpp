//Assignment 2
//Josh Long
//Comsc-110

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string name, address, phone, email;

    cout << "This program will take the personal information you enter and repeat it \n\n";
    cout << "Type here\n\n";

    cout << "Full name: ";
    getline (cin, name);

    cout << "Address: ";
    getline (cin, address);

    cout << "Phone number: ";
    getline (cin, phone);

    cout << "Email address: ";
    getline (cin, email);

    cout << "\nUser information:\n\n";
    cout << "Name: " << name << "\n";
    cout << "Address: " << address << "\n";
    cout << "Phone number: " << phone << "\n";
    cout << "Email address: " << email << "\n";

}
