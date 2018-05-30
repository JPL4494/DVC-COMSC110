//Assignment 5
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main()
  {
      int inches, feet, yards, rem1, rem2;

      cout << "This is a calculator to convert inches yards\n";
      cout << "Type in the inches that you want to convert to yards\n";
      cin >> inches;

            feet = inches / 12;
            rem1 = inches % 12;
            yards = feet / 3;
            rem2 = feet % 3;

      cout << inches << " inches are " << yards << " yards and " << rem2 << " feet and " << rem1 << " inches";


        return 1;
  }
