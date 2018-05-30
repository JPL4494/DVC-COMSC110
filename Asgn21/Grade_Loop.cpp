//Assignment 21
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    double grade, Atotal, Btotal, Ctotal, Dtotal, Ftotal, total;
    char letter;
    string name;

    cout << "This program will take student test scores and display their class grades.\n";
    cout << "To stop entering scores just enter '//' instead of a number\n";

    total = 0;
    Atotal = 0;
    Btotal = 0;
    Ctotal = 0;
    Dtotal = 0;
    Ftotal = 0;

    cout << endl << "Enter grade: ";
    cin >> grade;

    while (cin)
    {
       cin.ignore ();

       cout << "Enter student name: \n";
       getline(cin, name);

       total = total + 1;

       if (grade >= 90.0)
        {
          Atotal = Atotal + 1;
          letter = 'A';
        }

       else if (grade >= 80.0)
        {
          Btotal = Btotal + 1;
          letter = 'B';
        }

       else if (grade >= 70.0)
        {
          Ctotal = Ctotal + 1;
          letter = 'C';
        }

       else if (grade >= 60.0)
        {
          Dtotal = Dtotal + 1;
          letter = 'D';
        }

       else if (grade < 60.0)
        {
          Ftotal = Ftotal + 1;
          letter = 'F';
        }

    cout << name << " " << grade << " " << letter << endl << endl;

    cout << "Enter grade: ";
    cin >> grade;

    }

    cout << "Summary Report\n";
    cout << "Total students: " << total << endl;
    cout << "Students with A: " << Atotal << endl;
    cout << "Students with B: " << Btotal << endl;
    cout << "Students with C: " << Ctotal << endl;
    cout << "Students with D: " << Dtotal << endl;
    cout << "Students with F: " << Ftotal << endl;


}
