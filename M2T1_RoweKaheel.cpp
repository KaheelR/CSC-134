// csc 134
// M2T1 - Product Sales
// Kaheel Rowe
// 02/09/2026
// Simple checkout machine

#include <iostream>
#include <iomanip> // for the 2 decimal places
using namespace std;

int main() {

    // Set up all variables
    string first_name, last_name, full_name; // holds customer name
    string product = "mangos"; // holds product name
    int amount_purchased;
    double cost_each = 0.99;
    double total_cost;

    // Greet the customer
    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What's your first name?";
    cin >> first_name;
    cout << "What's your last name?";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    // Ask how much they'd like to purchase
    cout << "How many " << product << " would you like today? ";
    cin >> amount_purchased;

    // calculate total cost
    total_cost = amount_purchased * cost_each;

    // Formatting: Set all prices to 2 decimal places
    cout << fixed << setprecision(2) << fixed;

    // Give the result
    cout << "For " << amount_purchased << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0; // no errors
}