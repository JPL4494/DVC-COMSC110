//Assignment 37
//Josh Long
//CS-110

#include <iostream>

using namespace std;

double sort(int i, double SIZE, int j, double temp, double s[])
{
    for (i = 0; i < SIZE; i++)
       {
           for (j = i + 1; j < SIZE; j++)
           {
               if (s[i] > s[j])
               {
                   temp = s[i];
                   s[i] = s[j];
                   s[j] = temp;
               }
           }
       }
}

int main()
{
    int SIZE = 20;
    double a[SIZE], sorted[SIZE], temp;
    int i, j;

    cout << "This program will sort the scores you enter, but only up to twenty scores\n\n";

    cout << "Enter number of scores: ";
    cin >> j;

    SIZE = j;

    if (j <= 20 && j >= 1)
    {
        for (i = 0; i < SIZE; i++)
    {
        cout << "Enter Score: ";
        cin >> a[i];
        sorted[i] = a[i];
    }

    sort(i,SIZE,j,temp,sorted);

    cout << endl << "Original values: ";

    for (i = 0; i < SIZE; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl << endl << "Sorted Values: ";

    for (i = 0; i < SIZE; i++)
    {
        cout << sorted[i] << " ";
    }
    cout << endl << endl << "Bye" << endl;
    }

    if (j < 1 || j > 20)
    {
        cout << endl << "Wrong value entered, the number of scores is between 1 and 20\n";
    }

}
