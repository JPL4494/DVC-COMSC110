//Assignment 14
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    int day, month, year, date, d, ly;
    bool leapyear;

    cout << "This program will tell you the date in MM/DD/YYYY based on the date you enter.\n";
    cout << "It will also tell you the day that date falls on, 1-366\n\n";

    cout << "Type Here: (In integers)\n\n";

    cout << "Month: ";
    cin >> month;

    cout << "Day: ";
    cin >> day;

    cout << "Year: ";
    cin >> year;

    leapyear = false;

    ly = 0;

    if  ((year % 4) == 0)
    {
          leapyear = true;
    }

    if ((leapyear == true) && (month >= 3))
    {
        ly = 1;
    }

    switch (month)
    {
        case 1: d = 0;
        break;

        case 2: d = 31;
        break;

        case 3: d = 59;
        break;

        case 4: d = 90;
        break;

        case 5: d = 120;
        break;

        case 6: d = 151;
        break;

        case 7: d = 181;
        break;

        case 8: d = 212;
        break;

        case 9: d = 243;
        break;

        case 10: d = 273;
        break;

        case 11: d = 304;
        break;

        case 12: d = 334;
        break;

        default: d = 0;
    }

    date = d + day + ly;



    cout << "\nDate: " << month << "/" << day << "/" << year << "\n";
    cout << "Day: " << date << "\n";
}
