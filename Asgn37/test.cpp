#include <iostream>
using namespace std;

int main() {
    int a[1000];       // Declare an array of 1000 ints
    int n = 0;         // Number of values in a.

    while (cin >> a[n]) {
        n++;
    }

    int sum = 0;       // Start the total sum at 0.
    for (int i=0; i<n; i++) {
        sum = sum + a[i];  // Add the next element to the total
    }

    cout << sum << endl;

    return 0;
}
