// Kaheel Rowe
// M3Lab2
// 03/02/2026

#include <iostream>  // Required for input/output
using namespace std;

int main() {
    // Variable to store the user's numerical grade
    int grade;

    // Prompt the user to enter a numerical grade
    cout << "Enter your numerical grade: ";
    cin >> grade;

    // Input validation (optional but recommended)
    if (grade < 0 || grade > 100) {
        cout << "Invalid grade. Please enter a value between 0 and 100." << endl;
        return 1; // Exit the program with an error code
    }

    // Determine the letter grade using if-else statements
    if (grade >= 90 && grade <= 100) {
        cout << "Your letter grade is: A" << endl;
    }
    else if (grade >= 80 && grade <= 89) {
        cout << "Your letter grade is: B" << endl;
    }
    else if (grade >= 70 && grade <= 79) {
        cout << "Your letter grade is: C" << endl;
    }
    else if (grade >= 60 && grade <= 69) {
        cout << "Your letter grade is: D" << endl;
    }
    else { // grade is between 0 and 59
        cout << "Your letter grade is: F" << endl;
    }

    return 0; // Program finished successfully
}