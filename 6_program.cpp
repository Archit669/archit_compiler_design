#include <iostream>
#include <fstream>

using namespace std; // Adding the namespace directive

int main() {
    // Initialize counters
    int whitespaceCount = 0;
    int newlineCount = 0;
    
    // Input the filename
    string filename = "6_input.txt";

    // Open the file
    ifstream file(filename);

    // Check if the file is opened successfully
    if (!file) {
        cerr << "Error: Unable to open file " << filename << endl;
        return 1;
    }

    char character;
    while (file.get(character)) {
        if (character == ' ' || character == '\t') {
            // Check for whitespace characters (space or tab)
            whitespaceCount++;
        } else if (character == '\n') {
            // Check for newline character
            newlineCount++;
        }
    }

    // Close the file
    file.close();

    // Display the results
    cout << "Whitespace characters: " << whitespaceCount << endl;
    cout << "Newline characters: " << newlineCount << endl;

    return 0;
}
