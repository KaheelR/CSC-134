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
```

Here's a breakdown of each piece:

**`square(int n)`** — value-returning function that takes an int and returns `n * n`.

**`printAnswerLine(int n)`** — void function that prints one line of output. It calls `square()` internally to get the squared value.

**`main()`** — prints a header, then loops 1–10 calling `printAnswerLine()` each iteration.

**Output will look like:**
```
Number  Square
------  ------
1       1
2       4
3       9
4       16
5       25
6       36
7       49
8       64
9       81
10      100
