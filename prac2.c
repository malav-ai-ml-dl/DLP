#include <stdio.h>
#include <string.h>

int main() {
    int numStates, numAcceptingStates, initialState;
    int acceptingStates[10], transitionTable[10][2];
    char input[100];

    printf("Enter the number of states: ");
    scanf("%d", &numStates);

    printf("Enter the initial state: ");
    scanf("%d", &initialState);

    printf("Enter the number of accepting states: ");
    scanf("%d", &numAcceptingStates);

    printf("Enter the accepting states: ");
    for (int i = 0; i < numAcceptingStates; i++) {
        scanf("%d", &acceptingStates[i]);
    }

    printf("Define the transition table (state to 'a' and 'b'):\n");
    for (int i = 1; i <= numStates; i++) {
        printf("State %d to 'a': ", i);
        scanf("%d", &transitionTable[i][0]);

        printf("State %d to 'b': ", i);
        scanf("%d", &transitionTable[i][1]);
    }
    printf("Enter the input string: ");
    scanf("%s", input);

    int currentState = initialState;
    for (int i = 0; i < strlen(input); i++) {
        char symbol = input[i];
        if (symbol == 'a') {
            currentState = transitionTable[currentState][0];
        } else if (symbol == 'b') {
            currentState = transitionTable[currentState][1];
        } else {
            printf("Invalid symbol in input string.\n");
            return 0;
        }
    }

    int isValid = 0;
    for (int i = 0; i < numAcceptingStates; i++) {
        if (currentState == acceptingStates[i]) {
            isValid = 1;
            break;
        }
    }

    if (isValid) {
        printf("Valid string\n");
    } else {
        printf("Invalid string\n");
    }

    return 0;
}
