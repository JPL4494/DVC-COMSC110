//Assignment 13
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{

    double digit;
    char letter;

    cout << "This program will translate letters into numbers from the telephone keypad\n";
    cout << "Type in the letter, uppercase or lowercase, here: ";
    cin >> letter;

    switch (letter)
    {
        case 'a':
        case 'A':
        case 'b':
        case 'B':
        case 'c':
        case 'C':
           digit = 2;
        break;

        case 'd':
        case 'D':
        case 'e':
        case 'E':
        case 'f':
        case 'F':
           digit = 3;
        break;

        case 'g':
        case 'G':
        case 'h':
        case 'H':
        case 'i':
        case 'I':
           digit = 4;
        break;

        case 'j':
        case 'J':
        case 'k':
        case 'K':
        case 'l':
        case 'L':
           digit = 5;
        break;

        case 'm':
        case 'M':
        case 'n':
        case 'N':
        case 'o':
        case 'O':
           digit = 6;
        break;

        case 'p':
        case 'P':
        case 'q':
        case 'Q':
        case 'r':
        case 'R':
        case 's':
        case 'S':
           digit = 7;
        break;

        case 't':
        case 'T':
        case 'u':
        case 'U':
        case 'v':
        case 'V':
           digit = 8;
        break;

        case 'w':
        case 'W':
        case 'x':
        case 'X':
        case 'y':
        case 'Y':
        case 'z':
        case 'Z':
           digit = 9;
        break;

        default: cout << "That is not one of the letters!\n";
    }

    cout << "The letter you typed in, " << letter << ", becomes the number, " << digit << ", on a keypad.\n";
}
