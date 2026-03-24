// Kaheel Rowe
// 03/23/2026
// CSC-134
// M4HW1

#include <iostream>
using namespace std;

int main() {
    int num;

    // Input validation loop — keeps asking until the user enters 1–12
    cout << "Enter a number from 1 to 12? ";
    cin >> num;

    while (num < 1 || num > 12) {
        cout << "Invalid input. Please enter a number from 1 to 12? ";
        cin >> num;
    }

    // Times table loop
    int i = 1;
    while (i <= 12) {
        cout << num << " times " << i << " is " << num * i << "." << endl;
        i++;
    }

    return 0;
}
