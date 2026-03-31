#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Kaheel Rowe
03/31/2026
*/

// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_explore_yard();   // NEW: search the yard for a way in
void choice_find_key();       // NEW: found a key, try the front door

int main() {
    cout << "M5LAB1 - Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    cout << "\nMain Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (1 == choice) {
        choice_front_door();
    } else if (2 == choice) {
        choice_back_door();       // Part 1: wired up option 2
    } else if (3 == choice) {
        choice_go_home();         // Part 1: wired up option 3
    } else if (4 == choice) {
        cout << "Ok, quitting game" << endl;
        return;
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore();
        main_menu();
    }
}

// ── ORIGINAL BRANCHES ────────────────────────────────────────────────────────

void choice_front_door() {
    cout << "\nYou try the front door." << endl;
    cout << "It's locked tight. A rusty knocker stares back at you." << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (1 == choice) {
        choice_back_door();
    } else if (2 == choice) {
        choice_go_home();
    } else {
        cout << "Invalid choice." << endl;
        cin.ignore();
        choice_front_door();
    }
}

void choice_back_door() {
    cout << "\nYou creep around to the back of the house." << endl;
    cout << "There's a cracked window and an overgrown yard." << endl;
    cout << "Do you:" << endl;
    cout << "1. Search the yard for anything useful" << endl;
    cout << "2. Forget it and go home" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (1 == choice) {
        choice_explore_yard();    // leads into new branch
    } else if (2 == choice) {
        choice_go_home();
    } else {
        cout << "Invalid choice." << endl;
        cin.ignore();
        choice_back_door();
    }
}

void choice_go_home() {
    cout << "\nYou decide it's not worth it." << endl;
    cout << "You walk back down the crumbling path and never look back." << endl;
    cout << "Maybe some houses are better left unexplored." << endl;
    // returns to wherever called from (then up to main)
}

// ── NEW BRANCHES (Part 2) ─────────────────────────────────────────────────────

void choice_explore_yard() {
    cout << "\nYou push through the tall weeds and rusty garden tools." << endl;
    cout << "Under a moss-covered flowerpot, something glints in the dirt." << endl;
    cout << "It's an old iron key!" << endl;
    choice_find_key();            // yard always leads to finding the key
}

void choice_find_key() {
    cout << "\nYou hold up the key. It looks like it might fit the front door." << endl;
    cout << "Do you:" << endl;
    cout << "1. Go try the front door with the key" << endl;
    cout << "2. This is getting too creepy -- go home" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (1 == choice) {
        cout << "\nYou hurry around front and slide the key into the lock." << endl;
        cout << "With a heavy CLUNK, the door swings open." << endl;
        cout << "Darkness yawns before you. You step inside..." << endl;
        cout << "\n*** You made it in! THE END ***" << endl;
    } else if (2 == choice) {
        choice_go_home();
    } else {
        cout << "Invalid choice." << endl;
        cin.ignore();
        choice_find_key();
    }
}
