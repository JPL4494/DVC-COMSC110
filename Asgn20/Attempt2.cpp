//Assignment 20
//Josh Long
//Comsc-110

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int number, sum, count, average, stop;
    char kill;
    //bool stop;
    //string kill;

    cout << "This program will add the amount of numbers that you choose and then find their average.\n";
    cout << "To stop entering numbers just enter 'q' instead of a number\n";

    //stop == false;

    sum = 0;
    count = 0;
    average = 0;
    stop = 0;

    while (kill != 'q')
    {
        cout << "Enter number " << count +  1 << ": ";
        cin >> number >> kill;
        //getline(cin, kill);

        sum = sum + number;

        count = count + 1;

        if (kill = 'q')
        {
            goto skip_loop;
        }

    }

    skip_loop: average = sum / count;

    cout << endl << "The sum of the numbers you entered is " << sum << endl;
    cout << "Their average is " << average << endl;
}
