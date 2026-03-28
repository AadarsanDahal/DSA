
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// Helper to define operator priority
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

// Helper to identify operands (alphabets and numbers)
int isOperand(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
}

void infixToPostfix(char* exp) {
    int i;
    int len = strlen(exp);
    char stack[100];
    int top = -1;

    printf("Postfix expression: ");

    //Scan the Infix expression from left to right
    for (i = 0; i < len; i++) {
        
        //If operand, add to output
        if (isOperand(exp[i])) {
            printf("%c", exp[i]);
        }
        //If '(', push to stack
        else if (exp[i] == '(') {
            stack[++top] = exp[i];
        }
        // If ')', pop until '(' is found and discard '('
        else if (exp[i] == ')') {
            while (top != -1 && stack[top] != '(') {
                printf("%c", stack[top--]);
            }
            top--; // Discarding the '(' from stack
        }
        else {
            while (top != -1 && precedence(stack[top]) >= precedence(exp[i])) {
                printf("%c", stack[top--]);
            }
            stack[++top] = exp[i];
        }
    }

    while (top != -1) {
        printf("%c", stack[top--]);
    }
}

int main() {
    char exp[100];
    printf("Enter Infix expression: ");
    scanf("%s", exp);

    infixToPostfix(exp);

    printf("\n\nProgram Made BY : Aadarsan Dahal");
    printf("\n\nPress any key to exit...");
    getch(); 
    return 0;
}
