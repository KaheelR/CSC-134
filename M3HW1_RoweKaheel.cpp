// CSC 134
// M3HW1
// Kaheel Rowe
// 03/10/2026

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    // ─────────────────────────────────────────
    // Question 1 - Simple Chatbot
    // ─────────────────────────────────────────
    cout << "Question 1" << endl;
    cout << "─────────────────────────────────────────" << endl;

    string q1Response;
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> q1Response;

    if (q1Response == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    } else if (q1Response == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    } else {
        cout << "If you're not sure... that's OK." << endl;
    }

    cout << endl;

    // ─────────────────────────────────────────
    // Question 2 - Receipt Calculator
    // ─────────────────────────────────────────
    cout << "Question 2" << endl;
    cout << "─────────────────────────────────────────" << endl;

    double mealPrice;
    int orderType;
    double taxRate = 0.08;
    double tipRate = 0.15;

    cout << "Enter the price of the meal: $";
    cin >> mealPrice;

    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> orderType;

    double tax = mealPrice * taxRate;
    double tip = 0.0;
    double total = 0.0;

    if (orderType == 1) {
        tip = mealPrice * tipRate;
    }

    total = mealPrice + tax + tip;

    cout << endl;
    cout << "===== RECEIPT =====" << endl;
    cout << "Meal:  $" << mealPrice << endl;
    cout << "Tax:   $" << tax << endl;
    if (orderType == 1) {
        cout << "Tip:   $" << tip << endl;
    }
    cout << "-------------------" << endl;
    cout << "Total: $" << total << endl;
    cout << "===================" << endl;

    cout << endl;

    // ─────────────────────────────────────────
    // Question 3 - Choose Your Own Adventure
    // ─────────────────────────────────────────
    cout << "Question 3" << endl;
    cout << "─────────────────────────────────────────" << endl;

    int q3Choice1, q3Choice2;

    cout << "You wake up in a dark forest. A shadowy figure blocks your path." << endl;
    cout << "What do you do?" << endl;
    cout << "  1. Approach the figure" << endl;
    cout << "  2. Run away into the trees" << endl;
    cout << "Enter 1 or 2: ";
    cin >> q3Choice1;

    if (q3Choice1 == 2) {
        cout << "You stumble into a pit trap hidden in the dark. Game over!" << endl;
    } else {
        cout << "The figure reveals itself to be a friendly guide." << endl;
        cout << "The guide offers you two paths:" << endl;
        cout << "  1. The stone bridge over the river" << endl;
        cout << "  2. The rope bridge over the chasm" << endl;
        cout << "Enter 1 or 2: ";
        cin >> q3Choice2;

        if (q3Choice2 == 1) {
            cout << "You cross safely and find a village. You win! Congratulations!" << endl;
        } else {
            cout << "The rope bridge snaps halfway across. Game over!" << endl;
        }
    }

    cout << endl;

    // ─────────────────────────────────────────
    // Question 4 - Math Practice
    // ─────────────────────────────────────────
    cout << "Question 4" << endl;
    cout << "─────────────────────────────────────────" << endl;

    srand(time(0));

    int num1 = rand() % 10;
    int num2 = rand() % 10;
    int correctAnswer = num1 + num2;
    int userAnswer;

    cout << "What is " << num1 << " plus " << num2 << "?" << endl;
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "Correct! Great job!" << endl;
    } else {
        cout << "Incorrect. The correct answer was " << correctAnswer << "." << endl;
    }

    return 0;
}