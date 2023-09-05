// Include the necessary header files.
#include <iostream>
#include <vector>
#include <string>

// Use the standard namespace for convenience.
using namespace std;

int main() {
    // Define a vector containing C++ keywords.
    vector<string> keyWords = {
        "auto", "break", "case", "char", "class", "const", "continue", "default",
        "do", "double", "else", "enum", "extern", "float", "for", "goto",
        "if", "int", "long", "namespace", "operator", "return", "short", "sizeof",
        "static", "struct", "switch", "template", "this", "typedef", "union", "unsigned",
        "void", "volatile", "while"
    };

    // Declare a string variable to store the user's input.
    string userKeyWord;

    // Prompt the user to enter a keyword.
    cout << "Enter your keyword: ";
    
    // Read the user's input.
    cin >> userKeyWord;

    // Initialize a flag to check if the user's input is a keyword.
    bool flag = true;

    // Iterate through the vector of keywords.
    for (int idx = 0; idx < keyWords.size(); idx++) {
        // Check if the user's input matches any keyword.
        if (keyWords[idx] == userKeyWord) {
            // If a match is found, set the flag to false and print a message.
            flag = false;
            cout << "It is a keyword of C++ language." << endl;
            // Exit the loop since we've already determined it's a keyword.
            break;
        }
    }

    // Check the flag to determine if the user's input is not a keyword.
    if (flag) {
        cout << "It is not a keyword of C++ language." << endl;
    }

    return 0;
}
