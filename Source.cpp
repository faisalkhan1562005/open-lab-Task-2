#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int choice;
    cout << "Prime Number Checker and Finder\n";
    cout << "1. Find prime numbers in a range\n";
    cout << "2. Check if a specific number is prime\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        int start, end;
        cout << "Enter the range (start and end): ";
        cin >> start >> end;
        cout << "Prime numbers in the range " << start << " to " << end << " are: ";
        for (int num = start; num <= end; num++) {
            if (isPrime(num)) {
                cout << num << " ";
            }
        }
        cout << endl;
    }
    else if (choice == 2) {
        int number;
        cout << "Enter a number to check for primality: ";
        cin >> number;
        if (isPrime(number)) {
            cout << number << " is a prime number." << endl;
        }
        else {
            cout << number << " is not a prime number." << endl;
        }
    }
    else {
        cout << "Invalid choice. Please select 1 or 2." << endl;
    }

    return 0;
}