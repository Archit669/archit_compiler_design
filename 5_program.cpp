// write a program whether a string is a constant or not
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter your string: ";
    cin >> s;

    bool isConstant = true; // Use a more descriptive variable name

    for (char c : s) { // Use a range-based for loop for clarity
        if (!isdigit(c)) { // Use isdigit() to check if a character is a digit
            isConstant = false;
            break; // Break out of the loop as soon as a non-digit character is found
        }
    }

    if (isConstant) {
        cout << "Given string is a constant" << endl;
    } else {
        cout << "Given string is not a constant" << endl;
    }

    return 0;
}
