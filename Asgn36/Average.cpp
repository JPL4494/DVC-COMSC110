//Assignment 36
//Josh Long
//CS-110

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    int num, start, average, sc;
    string scores, total;

    cout << "This program will take the average test scores that you enter\n" << "For a class that is between 1 and 20 students\n\n";

    cout << "Enter class size <1-20>: ";
    cin >> num;

    if (num < 1 || num > 20)
    {
        cout << "Class size is NOT within required range. The required range is 1 to 20.\n";
    }

    start = 1;
    cin.ignore();
    average = 0;
    sc = 0;

    while (num >= 1 && num <= 20 && start <= num)
    {
        cout << "Enter score: ";
        cin >> sc;

        average = average + sc;

        ostringstream convert;
        convert << sc;
        scores = convert.str();
        total = total + ' ' + scores;

        start++;
    }

    average = average / num;

    if (num >= 1 && num <= 20)
    {
        cout << endl << "Original Scores:" << total;
        cout << endl << "Average Score: " << average << endl << endl;
    }
}
