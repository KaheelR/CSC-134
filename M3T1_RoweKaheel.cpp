// Kaheel Rowe
// M3T1
// 03/02/2026

#include <iostream>
using namespace std;

int main() {
    // declare our variables
    int widthOne, lengthOne, widthTwo, lengthTwo;
    int areaOne, areaTwo;

    // ask for user input
    cout << "Please enter the width and height of the first" << endl;
    cout << "rectangle, separated by a space or newline" << endl;
    cin >> widthOne >> lengthOne;

    cout << "Please enter the width and height of the second" << endl;
    cout << "rectangle, separated by a space or newline" << endl;
    cin >> widthTwo >> lengthTwo;

    // calculate answer
    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;

    // display results 
    cout << "Rectangle one has area of " << areaOne << endl;
    cout << "Rectangle two has area of " << areaTwo << endl;

    // determine which is bigger
    if (areaOne > areaTwo) {
        cout << "Rectangle one is bigger" << endl;
    }

    if (areaTwo > areaOne) {
        cout << "Rectangle two is bigger" << endl;
    }

    if (areaOne == areaTwo) {
        cout << "They are the same size" << endl;
    }


}