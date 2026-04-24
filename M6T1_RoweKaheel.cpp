/*
Kaheel Rowe
CSC 134
M6T1 - Loops and Arrays
Cars at a Construction Site
04/23/2026

Part 1: Loop only (no arrays) - count cars per day, find total and average
Part 2: Loop + array - same, but store each day's value and display ASCII bar chart
*/

#include <iostream>
#include <string>
using namespace std;

// Function Declarations
void part1();
void part2();

// -------------------------------------------------------
int main() {
    part1();
    part2();
    return 0;
}

// -------------------------------------------------------
// Part 1 - No arrays
// Count cars passing the site each day Mon-Fri,
// find the total and average. Nothing is stored.
void part1() {
    cout << "=== Part 1: Loop Only ===" << endl;
    cout << "Enter the number of cars that passed the site each day." << endl;

    const int SIZE = 5;
    int count = 0;
    int cars_today = 0;
    int cars_total = 0;
    double cars_avg = 0.0;

    while (count < SIZE) {
        cout << "Day " << count << " (0=Mon, 4=Fri): ";
        cin >> cars_today;
        cars_total += cars_today;
        count++;
    }

    cars_avg = (double)cars_total / SIZE;

    cout << endl;
    cout << "Total cars this week : " << cars_total << endl;
    cout << "Average cars per day : " << cars_avg  << endl;
    cout << endl;
}

// -------------------------------------------------------
// Part 2 - Loop + Array
// Same data collection, but values are stored in an array
// so we can print a summary table and ASCII bar chart.
void part2() {
    cout << "=== Part 2: Loop + Array ===" << endl;
    cout << "Enter the number of cars that passed the site each day." << endl;

    const int SIZE = 5;
    string days[SIZE] = {"Mon", "Tue", "Wed", "Thu", "Fri"};
    int cars[SIZE];          // one slot per day
    int cars_total = 0;
    double cars_avg = 0.0;

    // --- Input ---
    for (int i = 0; i < SIZE; i++) {
        cars[i] = 0;           // zero-init before use (good habit)
        cout << days[i] << ": ";
        cin >> cars[i];
        cars_total += cars[i];
    }

    cars_avg = (double)cars_total / SIZE;

    // --- Summary table ---
    cout << endl;
    cout << "Day\tCars" << endl;
    cout << "---\t----" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << "\t" << cars[i] << endl;
    }
    cout << endl;
    cout << "Total cars this week : " << cars_total << endl;
    cout << "Average cars per day : " << cars_avg  << endl;
    cout << endl;

    // --- ASCII bar chart ---
    // Each '#' represents 10 cars (rounded).
    // A label column keeps it readable.
    cout << "=== Weekly Traffic Chart (each # = 10 cars) ===" << endl;
    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        // Print day label (fixed width)
        cout << days[i] << " | ";

        // Print one '#' per 10 cars
        int bars = cars[i] / 10;
        for (int b = 0; b < bars; b++) {
            cout << "#";
        }

        // Print the exact number at the end of the bar
        cout << " " << cars[i] << endl;
    }
    cout << endl;
}