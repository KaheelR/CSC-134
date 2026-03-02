// Kaheel Rowe
// M2HW1 - Question 3
// 03/02/2026

#include <iostream>
using namespace std;

int main()
{
    int pizzas, slicesPerPizza, visitors;

    cout << "How many pizzas? ";
    cin >> pizzas;

    cout << "How many slices per pizza? ";
    cin >> slicesPerPizza;

    cout << "How many visitors? ";
    cin >> visitors;

    int totalSlices = pizzas * slicesPerPizza;
    int slicesNeeded = visitors * 3;
    int leftover = totalSlices - slicesNeeded;

    cout << "Slices left over: " << leftover << endl;

    return 0;
}