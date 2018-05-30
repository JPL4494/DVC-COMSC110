//Assignment 40
//Josh Long
//CS-110

#include <iostream>

using namespace std;

struct Time
{
    int hour;
    int minute;
    int second;
};

Time input(Time t, int & j)
{

    cout << "Enter Hour: ";
    cin >> t.hour;
    if (t.hour >= 0){
    cout << "Enter Minute: ";
    cin >> t.minute;}
    if (t.hour >= 0 && t.minute >= 0){
    cout << "Enter Second: ";
    cin >> t.second;}
    if (t.hour < 0 || t.minute < 0 || t.second < 0)
    {
        j = -1;
    }

    return t;
}

void display(Time t)
{
    string a, b, c;
    a = "";
    b = "";
    c = "";
    if (t.hour < 10)
    {
        a = '0';
    }
    if (t.minute < 10)
    {
        b = '0';
    }
    if (t.second < 10)
    {
        c = '0';
    }

    cout << a << t.hour << ":" << b << t.minute << ":" << c << t.second;
}

int findDiff(Time t, Time t1, Time t2)
{
    int sec1, sec2, difference;
    sec1 = (t1.hour*3600) + (t1.minute*60) + t1.second;
    sec2 = (t2.hour*3600) + (t2.minute*60) + t2.second;

    if (sec1 > sec2)
    {
        difference = sec1 - sec2;
    }
    else
    {
        difference = sec2 - sec1;
    }

    t.hour = difference / 3600;
    difference = difference - t.hour*3600;
    t.minute = difference / 60;
    difference = difference - t.minute*60;
    t.second = difference;

    string a, b, c;
    a = "";
    b = "";
    c = "";
    if (t.hour < 10)
    {
        a = '0';
    }
    if (t.minute < 10)
    {
        b = '0';
    }
    if (t.second < 10)
    {
        c = '0';
    }

    cout << endl << endl << "Difference\n";
    cout << a << t.hour << ":" << b << t.minute << ":" << c << t.second;
}

int main()
{
    Time t1, t2, t;
    int difference, j;
    j = 1;

    cout << "This program will display the difference between two times you enter on a\n 24 hour clock, and gives answer in HH:MM:SS\n" << "Just enter -1 at anytime to exit the program\n\n";

    while(j > 0){
    cout << "Time 1\n";
    t1 = input(t,j);
    if (j > 0){
    cout << endl;
    cout << "Time 2\n";
    t2 = input(t,j);}
    if (j > 0){
    cout << endl << "Time 1: " << endl;
    display(t1);
    cout << endl << endl;
    cout << "Time 2: " << endl;
    display(t2);
    findDiff(t, t1, t2);

    cout << endl << endl;}
    }

    cout << "\n\nBye\n\n";
}
