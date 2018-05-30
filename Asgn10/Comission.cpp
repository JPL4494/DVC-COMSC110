//Assignment 10
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main ()
{
    double sales, commission;

    cout << "This program will allow you to calculate the amount of commissions you earned\n";
    cout << "Type in the amount of money you made through sales\n";
    cin >> sales;

    if (sales <= 2000.0)
    {
        commission = 0.15 * sales;
    }

     else if (sales <= 3000.0)
     {
         commission = (0.15 * 2000.0) + ((sales - 2000.0) * 0.20);
     }

      else if (sales <= 3500.00)
      {
          commission = (0.15 * 2000.0) + (0.20 * 1000.0) + ((sales - 3000.00) * 0.25);
      }

       else if (sales <= 4000.0)
       {
           commission = (0.15 * 2000.0) + (0.20 * 1000.0) + (0.25 * 500) + ((sales - 3500.0) * 0.30);
       }

        else if (sales > 4000.0)
        {
            commission = (0.15 * 2000.0) + (0.20 * 1000.0) + (0.25 * 500) + (0.30 * 500) + ((sales - 4000.0) * 0.35);
        }

    cout << "Sales: " << sales << "\n";
    cout << "Commissions: " << commission << "\n";
}
