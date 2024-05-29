#include<iostream>
using namespace std;

// Function to print the Fibonacci sequence up to n terms
void print_fibonacci_sequence(const int& n, int& n1, int& n2, int& count);

int main() {
    // Initialization
    int n = 0;
    int n1 = 0;
    int n2 = 1;
    int count = 0;

    // User input
    cout << "Enter the range of the Fibonacci sequence " << endl;
    cin >> n;
    // TODO: Add error handling for non-integer or negative input

    cout << "Enter the first term (f1) of sequence " << endl;
    cin >> n1;
    // TODO: Add error handling for non-integer input

    cout << "Enter the second term (f2) of sequence " << endl;
    cin >> n2;
    // Handle case where n2 is zero
    if (n2 == 0) {
        cout << "n2 cannot be zero " << endl;
        cout << "Re-enter value of n2 " << endl;
        cin >> n2;
        if (n2 == 0) { n2 = 1; }
    }

    // Print the Fibonacci sequence
    cout << "The Fibonacci sequence is: ";
    print_fibonacci_sequence(n, n1, n2, count);

    return 0;
}

void print_fibonacci_sequence(const int& n, int& n1, int& n2, int& count) {
    if (count < n) {
        cout << n1 << " ";
        int temp = n1 + n2;
        count++;
        print_fibonacci_sequence(n, n2, temp, count);
    }
    else {
        cout << "\nThe " << n << " term of Fibonacci sequence is: " << (n2 - n1) << endl;
    }
}
