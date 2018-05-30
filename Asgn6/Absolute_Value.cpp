//Assignment 6
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main()
  {
      double num, abs;

      cout << "This program will find the absolute value of a number\n";
      cout << "Type in the number here\n";
      cin >> num;

      if (num >= 0)
      {
          cout << "The absolute value of " << num << " is " << num;
      }

      else if (num < 0)
      {
          abs = -1 * num;

          cout << "The absolute value of " << num << " is " << abs;
      }

      return 1;
  }
