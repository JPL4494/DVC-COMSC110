//Assignment 39
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

double min(double s[], double & m1)
{
    m1 = s[0];

}

double max(double s[], double & m2, int b)
{
    m2 = s[b - 1];
}

double average(int i, double SIZE, int j, double s[], int b, double & mean)
{
    double temp = 0;

    for (i = 0; i < SIZE; i++)
       {
           temp = temp + s[i];
       }

       mean = temp / b;
}

double middle(int & median, double s[], int b)
{
    median = s[b / 2];
}

int main()
{
    int SIZE = 20;
    double a[SIZE], sorted[SIZE], temp, m1 , m2, mean;
    int i, j, b, median;

    cout << "This program will sort, find the min, max, average and median of the scores you enter, but only up to twenty scores\n\n";

    cout << "Enter number of scores: ";
    cin >> b;

    SIZE = b;

    if (b <= 20 && b >= 1)
    {
        for (i = 0; i < SIZE; i++)
        {
            cout << "Enter Score: ";
            cin >> a[i];
            sorted[i] = a [i];
        }

        sort(i,SIZE,j,temp,sorted);
        min(sorted,m1);
        max(sorted,m2,b);
        average(i,SIZE,j,sorted,b,mean);
        middle(median,sorted,b);

        cout << endl << "Original values: ";

        for (i = 0; i < SIZE; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl << "Sorted Values: ";

        for (i = 0; i < SIZE; i++)
        {
            cout << sorted[i] << " ";
        }

        cout << endl << "Min Value: " << m1;

        cout << endl << "Max Value: " << m2;

        cout << endl << "Mean Value: " << mean;

        cout << endl << "Median Value: " << median;

        cout << endl << endl << "Bye" << endl;
    }

    if (b < 1 || b > 20)
    {
        cout << endl << "Wrong value entered, the number of scores is between 1 and 20\n";
    }

}
