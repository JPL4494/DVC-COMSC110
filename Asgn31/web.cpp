#include <cstdlib>
#include <iostream>
#include <utility>
using namespace std;

const double PI = 3.14;

pair<double, double> swap1 (double num1, double num2)
{
    double temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    return make_pair(num1, num2);
}

int main(int argc, char *argv[])
{
    double num1, num2;

    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;

    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    cout << "Swap1\n" << "Returned from swap1\n";
    pair<double, double> swap1;
    num1 = swap1(num1, num2);
    cout << "Number 1: " << num1;
}
