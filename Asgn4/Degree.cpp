//Assignment 4
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main()
  {
      double deg, final;

      cout << "This is a degree conveter\n";
      cout << "This program will convert Farenheit to Centigrade, type in the degree to convert";
      cin >> deg;

      final = (5.0 / 9.0) * (deg - 32);

      cout << "\nThe degree you entered, " << deg << " degrees Farenheit is " << final << " Centigrade\n";


    return 1;
}
