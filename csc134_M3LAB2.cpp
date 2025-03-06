// CSC 134
// M3LAB2
// Sebastian Camacho
// 03/06/2025

#include <iostream>
using namespace std;

int main() {
    // variables
    int numericalGrade;

    // user input
    cout << "Enter the numerical grade (0-100): ";
    cin >> numericalGrade;

    // conditional statements
    if (numericalGrade < 0 || numericalGrade > 100) {
        cout << "Invalid input! Please enter a grade between 0 and 100." << endl;
        return 1;
    }

    if (numericalGrade >= 90) {
        cout << "Your letter grade is: A" << endl;
    } else if (numericalGrade >= 80) {
        cout << "Your letter grade is:B" << endl;
    } else if (numericalGrade >= 70) {
        cout << "Your letter grade is: C" << endl;
    } else if (numericalGrade >= 60) {
        cout << "Your letter grade is: D" << endl;
    } else {
        cout << "Your letter grade is: F" << endl;
    }

    return 0;
}