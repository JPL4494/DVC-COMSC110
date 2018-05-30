//Assignment 7
//Josh Long
//Comsc-110

#include <iostream>

using namespace std;

int main()
  {
      double n1, n2, pick;

      cout << "This program will show you which is the larger of a pair\n";
      cout << "Enter the first number\n";
      cin >> n1;

      cout << "Enter the second number\n";
      cin >> n2;

           if (n1 > n2)
            {
              cout << "The larger number of " << n1 << " and " << n2 << " is " << n1 << ".";
            }

           else if (n2 > n1)
            {
              cout << "The larger number of " << n1 << " and " << n2 << " is " << n2 << ".";
            }

           else if (n1 == n2)
            {
              cout << "The larger number of " << n1 << " and " << n2 << " is neither, they are equal.";
            }


    return 1;
  }

