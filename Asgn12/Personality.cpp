//Assignment 12
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    int color;

    cout << "This program will tell you your personality type from your favorite color\n";
    cout << "Pick your favorite color from the list below and eneter the number it shows\n";

    cout << "1 = My favorite color is red\n" << "2 = My favorite color is green\n" <<
              "3 = My favorite color is blue\n" << "3 = My favorite color is violet\n";
    cin >> color;

    switch (color)
    {
        case 1: cout << "Based on your fasvorite color, red, you are the feeling type.\n";
        break;

        case 2: cout << "Based on your fasvorite color, green, you are the thinking type.\n";
        break;

        case 3: cout << "Based on your fasvorite color, blue, you are the intuitive type.\n";
        break;

        case 4: cout << "Based on your fasvorite color, violet, you are the sensing type.\n";
        break;

        default: cout << "That is not one of the choices, you are the impatient type.\n";
    }



}
