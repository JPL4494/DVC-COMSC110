//Assignment 8
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    double score, poss, right, pass;

    cout << "This program will tell you if you passed or failed this test\n";
    cout << "Type in the percent needed to pass\n";
    cin >> pass;

    cout << "The largest possible score\n";
    cin >> poss;

    cout << "And how many you got correct\n";
    cin >> right;

    score = (right / poss) * 100.;


    if (score >= pass)
     {
        cout << "You got a score of " << right << " out of " << poss << ", which is " << score << "% \nand that is greater than " << pass << "%, you passed.\n";
     }

    else if (score < pass)
     {
        cout << "You got a score of " << right << " out of " << poss << ", which is " << score << "% \nand that is less than " << pass << "%, you failed.\n";
     }

    }
