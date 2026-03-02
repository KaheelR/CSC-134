// Kaheel Rowe
// M2HW1 - Question 1
// 03/02/2026


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string name;
    double startBalance, deposit, withdrawal;
    int accountNumber = 123456;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter starting balance: ";
    cin >> startBalance;

    cout << "Enter deposit amount: ";
    cin >> deposit;

    cout << "Enter withdrawal amount: ";
    cin >> withdrawal;

    double finalBalance = startBalance + deposit - withdrawal;

    cout << fixed << setprecision(2);
    cout << "\nName on account: " << name << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Final balance: $" << finalBalance << endl;

    return 0;
}