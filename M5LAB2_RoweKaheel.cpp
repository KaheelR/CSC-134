// CSC-134
// M5LAB2
// Kaheel Rowe
// 03/31/2026

#include <iostream>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    // This program calculates the area of a rectangle.

    double length,    // The rectangle's length
           width,     // The rectangle's width
           area;      // The rectangle's area

    // Get the rectangle's length.
    length = getLength();

    // Get the rectangle's width.
    width = getWidth();         // FIX 1: missing semicolon

    // Get the rectangle's area.
    area = getArea(length, width);   // FIX 2: "are" -> "area", added arguments

    // Display the rectangle's data.
    displayData(length, width, area);

    return 0;
}

//***************************************************
// getLength                                        *
// Prompts user to enter the rectangle's length.   *
// Returns the length as a double.                 *
//***************************************************
double getLength()
{
    double length;
    cout << "Enter the rectangle's length: ";
    cin  >> length;
    return length;
}

//***************************************************
// getWidth                                         *
// Prompts user to enter the rectangle's width.    *
// Returns the width as a double.                  *
//***************************************************
double getWidth()
{
    double width;
    cout << "Enter the rectangle's width: ";
    cin  >> width;
    return width;
}

//***************************************************
// getArea                                          *
// Accepts length and width as arguments.          *
// Calculates and returns the area as a double.   *
//***************************************************
double getArea(double length, double width)
{
    return length * width;
}

//***************************************************
// displayData                                      *
// Accepts length, width, and area as arguments.  *
// Displays the rectangle's data.                 *
//***************************************************
void displayData(double length, double width, double area)
{
    cout << "\n--- Rectangle Data ---"    << endl;
    cout << "Length : " << length        << endl;
    cout << "Width  : " << width         << endl;
    cout << "Area   : " << area          << endl;
}
