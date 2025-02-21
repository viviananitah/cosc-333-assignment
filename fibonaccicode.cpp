#include <iostream>
using namespace std;

// takes an argument integer n representing number of yeats to generate
void fibonacci(int n) {
    // t1 represents 1 branch
    // nextTerm represents the number of branches in the next year
    int t1 = 1, t2 = 1, nextTerm;

    cout << "Tree Branches Over " << n << " Years: ";

    for (int i = 1; i <= n; ++i) {
        // print the current number of branches
        cout << t1 << " ";
        // calculate the next term
        nextTerm = t1 + t2;
        // Update t1 to the next term
        t1 = t2;
        // Update t2 to the next term
        t2 = nextTerm;
    }
    cout << endl;
}

int main() {
    int years;
    cout << "Enter the number of years to simulate tree growth: ";
    cin >> years;

    if (years <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        fibonacci(years);  // Call the function to generate Fibonacci sequence
    }

    return 0;
}