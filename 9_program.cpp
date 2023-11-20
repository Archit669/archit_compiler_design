#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the set of terminals and non-terminals
const char terminals[] = "ab";
const char nonTerminals[] = "S";


// Production rules
const char *productionRules[] = {
    "S -> aSb",
    "S -> ε" // ε represents an empty string
};


// Check if a given string belongs to the grammar
int belongsToGrammar(const char *input)
{
    char parseStack[1000];
    int top = 0;
    parseStack[top++] = '$'; // Start symbol
    parseStack[top++] = 'S'; // Initial state
    int inputIndex = 0;
    int valid = 1;
    while (top > 0 && inputIndex < strlen(input) && valid)
    {
        char topStack = parseStack[top - 1];
        char currentInput = input[inputIndex];
        if (topStack == currentInput)
        {
            top--;
            inputIndex++;
        }
        else
        {
            int found = 0;
            for (int i = 0; i < sizeof(productionRules) / sizeof(productionRules[0]); i++)
            {
                char lhs = productionRules[i][0];
                const char *rhs = productionRules[i] + 4;
                if (topStack == lhs)
                {
                    top--;
                    if (strcmp(rhs, "ε") != 0)
                    {
                        for (int j = strlen(rhs) - 1; j >= 0; j--)
                        {
                            parseStack[top++] = rhs[j];
                        }
                    }
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                valid = 0;
                break;
            }
        }
    }
    return valid && top == 0 && inputIndex == strlen(input);
}


int main()
{
    char input[1000];
    printf("Enter a string: ");
    scanf("%s", input);
    int isValid = belongsToGrammar(input);
    if (isValid)
    {
        printf("The string belongs to the grammar.\n");
    }
    else
    {
        printf("The string does not belong to the grammar.\n");
    }
    return 0;
}