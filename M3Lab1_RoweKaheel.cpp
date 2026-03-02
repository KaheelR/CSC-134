// Kaheel Rowe
// M3Lab1
// 03/02/2026

#include <iostream>
using namespace std;

int main() {

    int choice;

    cout << "A monster appears in front of you!" << endl;
    cout << "What do you do?" << endl;
    cout << "Type 1 to fight or 2 to run: ";
    cin >> choice;

    if (choice == 1) {
        cout << "You fight the monster and win!" << endl;
    }
    else if (choice == 2) {
        cout << "You run away safely." << endl;
    }
    else {
        cout << "That is not a valid choice." << endl;
    }

    cout << "Game over!" << endl;
    return 0;
}