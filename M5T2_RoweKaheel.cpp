#include <iostream>
using namespace std;

// CSC-134
// M5T2
// Kaheel Rowe
// 03/31/2026

int square(int n) {
    return n * n;
}

void printAnswerLine(int n) {
    cout << n << "\t" << square(n) << endl;
}

int main() {
    cout << "Number\tSquare" << endl;
    cout << "------\t------" << endl;
    
    for (int i = 1; i <= 10; i++) {
        printAnswerLine(i);
    }
    
    return 0;
}
