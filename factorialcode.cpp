#include <iostream>  // Include input-output stream library
using namespace std;

// Function to calculate factorial using an iterative approach
long long factorialIterative(int n) {
    long long result = 1;  // Initialize result as 1 (since factorial of 0 and 1 is 1)
    
    // Loop from 2 to n and multiply each number with result
    for (int i = 2; i <= n; i++) {
        result *= i;  // Multiply result by the current number
    }
    
    return result;  // Return the computed factorial value
}

int main() {
    int num;  // Variable to store user input

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;  // Read user input

    // Check if the number is negative
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Call the function and display the result
        cout << "Factorial of " << num << " is: " << factorialIterative(num) << endl;
    }

    return 0;  // Indicate that the program executed successfully
}