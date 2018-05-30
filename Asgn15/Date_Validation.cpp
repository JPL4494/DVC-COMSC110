//Assignment 15
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    int month, day, year, error, d, num, ly;
    bool leapyear;

    cout << "This program will tell you if the date you enter is a valid date, \nMM/DD/YYYY from 2000-2099.\n\n";

    cout << "Type Here\n";

    cout << "Month: ";
    cin >> month;

    cout << "Day: ";
    cin >> day;

    cout << "Year: ";
    cin >> year;

    ly = 0;

    leapyear = false;
    if  ((year % 4) == 0)
    {
          leapyear = true;
    }

    if ((leapyear == true) && (month >= 3))
    {
        ly = 1;
    }

    if ((year < 2000) || (year > 2099))
    {
        cout << "Unacceptable year entered: " << year << "\n";
        cout << "Enter a year value between 2000 and 2099\n";
        error = 1;
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


        default: cout << "Unacceptable month entered: " << month << endl;
        cout << "Enter a month value between 1 and 12\n";
        error = 1;
        break;
    }

    if ((day < 1) || (day > 31))
    {
        cout << "Unacceptable day entered: " << day << endl;
        cout << "Enter a day value between 1 and 31\n";
        error = 1;
    }

    if (  ( month == 4 || month == 6 || month == 9 || month == 11)  && ( day > 30 ) )
    {
        cout << "Mismatching month and day values entered\n";
        cout << "Month value entered: " << month << endl;
        cout <<  "Day value entered: " << day << endl;
        cout << "The month " << month << " does have the day " << day << endl;
        error = 1;
    }

    if ( (month == 2) && ( day > 29 ) && ( leapyear ) )
    {
        cout << "Mismatching month and day values entered:\n";
        cout << "Month value entered: " << month << endl;
        cout << "Day value entered: " << day << endl;
        error = 1;
    }



    if ( (month == 2) && ( day > 28 ) && ( ! leapyear ) )
    {
        cout << "Mismatching month and day values entered: \n";
        cout << "Month value entered: " << month << endl;
        cout << "Day value entered: " << day << endl;
        error = 1;
    }

    num = d + day + ly;

    if (error != 1)
    {
        cout << "Congratulations, " << month << "/" << day << "/" << year << " is a valid date!\n";
        cout << "The day number is " << num << endl;
    }


    }


