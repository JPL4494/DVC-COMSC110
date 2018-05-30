//Assignment 9
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    double test1, test2, test3, asgn1, asgn2, asgn3, asgn4, testtot, asgntot, final;
    char grade;

    cout << "This program will tell you your final grade in the class\n";
    cout << "To do this, you need to know your test and assignment scores\n\n";

    cout << "Test 1:";
    cin >> test1;

    cout << "Test 2:";
    cin >> test2;

    cout << "Test 3:";
    cin >> test3;

    cout << "Assignment One:";
    cin >> asgn1;

    cout << "Assignment Two:";
    cin >> asgn2;

    cout << "Assignment Three:";
    cin >> asgn3;

    cout << "Assignment Four:";
    cin >> asgn4;

    testtot = (((test1 + test2 + test3) / 3)) * .70;

    asgntot = (((asgn1 + asgn2 + asgn3 + asgn4) / 4) *.30);

    final = testtot + asgntot;

    if (final >= 90.0)
    {
        grade = 'A';
    }

    else if (final >= 80.0)
    {
        grade = 'B';
    }

    else if (final >= 70.0)
    {
        grade = 'C';
    }

    else if (final >= 60.0)
    {
        grade = 'D';
    }

    else
    {
        grade = 'F';
    }



cout << "\nYour scores:\n";

cout << "Test One: " << test1 << "\n";

cout << "Test Two: " << test2 << "\n";

cout << "Test Three: " << test3 << "\n";

cout << "Assignment One: " << asgn1 << "\n";

cout << "Assignment Two: " << asgn2 << "\n";

cout << "Assignment Three: " << asgn3 << "\n";

cout << "Assignment Four: " << asgn4 << "\n";

cout << "Your final percent in the class: " << final << "%\n";

cout << "Your final grade: " << grade << "\n";

}
