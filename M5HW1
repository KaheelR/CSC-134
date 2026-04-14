#include <iostream>
#include <iomanip>
#include <string>

// Kaheel Rowe
// CSC-134
// M5HW1
// 04/13/2026

using namespace std;

// ─── Question 1: Average Rainfall ────────────────────────────────────────────
void question1() {
    string month1, month2, month3;
    double rain1, rain2, rain3;

    cout << "\n--- Average Rainfall ---\n";

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    while (!(cin >> rain1)) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Invalid input. Enter rainfall for " << month1 << ": ";
    }

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    while (!(cin >> rain2)) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Invalid input. Enter rainfall for " << month2 << ": ";
    }

    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    while (!(cin >> rain3)) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Invalid input. Enter rainfall for " << month3 << ": ";
    }

    double average = (rain1 + rain2 + rain3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2
         << ", and " << month3 << " is " << average << " inches.\n";
}

// ─── Question 2: Volume of a Hyperrectangle (Block) ──────────────────────────
void question2() {
    double width, length, height;

    cout << "\n--- Volume of a Block ---\n";

    do {
        cout << "Enter the width: ";
        while (!(cin >> width)) {
            cin.clear(); cin.ignore(1000, '\n');
            cout << "Invalid input. Enter the width: ";
        }
        if (width <= 0) cout << "Width must be greater than zero.\n";
    } while (width <= 0);

    do {
        cout << "Enter the length: ";
        while (!(cin >> length)) {
            cin.clear(); cin.ignore(1000, '\n');
            cout << "Invalid input. Enter the length: ";
        }
        if (length <= 0) cout << "Length must be greater than zero.\n";
    } while (length <= 0);

    do {
        cout << "Enter the height: ";
        while (!(cin >> height)) {
            cin.clear(); cin.ignore(1000, '\n');
            cout << "Invalid input. Enter the height: ";
        }
        if (height <= 0) cout << "Height must be greater than zero.\n";
    } while (height <= 0);

    double volume = width * length * height;
    cout << "The volume of the block is " << volume << ".\n";
}

// ─── Question 3: Roman Numerals ───────────────────────────────────────────────
void question3() {
    int number;

    cout << "\n--- Roman Numeral Converter ---\n";

    do {
        cout << "Enter a number (1 - 10): ";
        while (!(cin >> number)) {
            cin.clear(); cin.ignore(1000, '\n');
            cout << "Invalid input. Enter a number (1 - 10): ";
        }
        if (number < 1 || number > 10)
            cout << "Please enter a number between 1 and 10.\n";
    } while (number < 1 || number > 10);

    string roman;
    switch (number) {
        case  1: roman = "I";    break;
        case  2: roman = "II";   break;
        case  3: roman = "III";  break;
        case  4: roman = "IV";   break;
        case  5: roman = "V";    break;
        case  6: roman = "VI";   break;
        case  7: roman = "VII";  break;
        case  8: roman = "VIII"; break;
        case  9: roman = "IX";   break;
        case 10: roman = "X";    break;
    }

    cout << "The Roman numeral version of " << number << " is " << roman << ".\n";
}

// ─── Question 4: Geometry Calculator ─────────────────────────────────────────
void question4() {
    int choice;

    cout << "\n--- Geometry Calculator ---\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";

    while (!(cin >> choice)) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Invalid input. Enter your choice (1-4): ";
    }

    if (choice < 1 || choice > 4) {
        cout << "The valid choices are 1 through 4. "
             << "Run the program again and select one of those.\n";
        return;
    }

    if (choice == 4) {
        cout << "Returning to main menu.\n";
        return;
    }

    if (choice == 1) {
        double radius;
        do {
            cout << "Enter the circle's radius: ";
            while (!(cin >> radius)) {
                cin.clear(); cin.ignore(1000, '\n');
                cout << "Invalid input. Enter the circle's radius: ";
            }
            if (radius < 0) cout << "The radius cannot be less than zero.\n";
        } while (radius < 0);

        double area = 3.14159 * radius * radius;
        cout << "The area is " << area << "\n";
    }
    else if (choice == 2) {
        double len, width;

        do {
            cout << "Enter the rectangle's length: ";
            while (!(cin >> len)) {
                cin.clear(); cin.ignore(1000, '\n');
                cout << "Invalid input. Enter the rectangle's length: ";
            }
            if (len < 0) cout << "Only enter positive values for length and width.\n";
        } while (len < 0);

        do {
            cout << "Enter the rectangle's width: ";
            while (!(cin >> width)) {
                cin.clear(); cin.ignore(1000, '\n');
                cout << "Invalid input. Enter the rectangle's width: ";
            }
            if (width < 0) cout << "Only enter positive values for length and width.\n";
        } while (width < 0);

        double area = len * width;
        cout << "The area is " << area << "\n";
    }
    else if (choice == 3) {
        double base, height;

        do {
            cout << "Enter the triangle's base: ";
            while (!(cin >> base)) {
                cin.clear(); cin.ignore(1000, '\n');
                cout << "Invalid input. Enter the triangle's base: ";
            }
            if (base < 0) cout << "Only enter positive values for base and height.\n";
        } while (base < 0);

        do {
            cout << "Enter the triangle's height: ";
            while (!(cin >> height)) {
                cin.clear(); cin.ignore(1000, '\n');
                cout << "Invalid input. Enter the triangle's height: ";
            }
            if (height < 0) cout << "Only enter positive values for base and height.\n";
        } while (height < 0);

        double area = base * height * 0.5;
        cout << "The area is " << area << "\n";
    }
}

// ─── Question 5: Distance Traveled ───────────────────────────────────────────
void question5() {
    double speed;
    int hours;

    cout << "\n--- Distance Traveled ---\n";

    do {
        cout << "What is the speed of the vehicle in mph? ";
        while (!(cin >> speed)) {
            cin.clear(); cin.ignore(1000, '\n');
            cout << "Invalid input. Enter a speed in mph: ";
        }
        if (speed < 0) cout << "Speed cannot be negative.\n";
    } while (speed < 0);

    do {
        cout << "How many hours has it traveled? ";
        while (!(cin >> hours)) {
            cin.clear(); cin.ignore(1000, '\n');
            cout << "Invalid input. Enter number of hours: ";
        }
        if (hours < 1) cout << "Hours traveled must be at least 1.\n";
    } while (hours < 1);

    cout << "\nHour    Distance Traveled\n";
    cout << "--------------------------------\n";
    for (int i = 1; i <= hours; i++) {
        cout << setw(4) << i << setw(12) << (speed * i) << "\n";
    }
}

// ─── Question 6 / Main Menu ───────────────────────────────────────────────────
int main() {
    int choice;

    do {
        cout << "\n===== Main Menu =====\n";
        cout << "1. Average Rainfall\n";
        cout << "2. Volume of a Block\n";
        cout << "3. Roman Numeral Converter\n";
        cout << "4. Geometry Calculator\n";
        cout << "5. Distance Traveled\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";

        while (!(cin >> choice)) {
            cin.clear(); cin.ignore(1000, '\n');
            cout << "Invalid input. Enter a number from 1 to 6: ";
        }

        switch (choice) {
            case 1: question1(); break;
            case 2: question2(); break;
            case 3: question3(); break;
            case 4: question4(); break;
            case 5: question5(); break;
            case 6: cout << "Goodbye!\n"; break;
            default:
                cout << "Invalid choice. Please enter a number from 1 to 6.\n";
        }
    } while (choice != 6);

    return 0;
}
