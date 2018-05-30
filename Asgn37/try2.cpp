#include <iostream>
using namespace std;

double sort(int i, int SIZE, int j, int temp, int s[])
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
       int a[SIZE], sorted[SIZE], temp;
       int i, j, min;
       cout << "??";
       cin >> j;

       SIZE = j;
       for (i = 0; i < SIZE; i++)
       {
           cout << "?";
           cin >> a[i];
           sorted[i] = a [i];
       }

       sort(i,SIZE,j,temp,sorted);

       cout << endl;

       for (i = 0; i < SIZE; i++)
       {
           cout << a[i] << " ";
       }
       cout << endl << endl;

       for (i = 0; i < SIZE; i++)
       {
           cout << sorted[i] << " ";
       }

       cout << endl << endl << "Bye" << endl;
}
