#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h> // Required for isdigit()

// Function to perform arithmetic operations
int evaluate(int b, int a, char op) {
    switch (op) {
        case '+': return b + a;
        case '-': return b - a;
        case '*': return b * a;
        case '/': return b / a;
    }
    return 0;
}

void evaluatePostfix(char* exp) {
    int stack[100];
    int top = -1;
    int i, a, b, result;

    //Scan the Postfix expression from left to right
    for (i = 0; i < strlen(exp); i++) {
        
        //If operand, push it onto the stack
        if (isdigit(exp[i])) {
            stack[++top] = exp[i] - '0';
        }
        //If operator, pop two, apply, and push result
        else {
            a = stack[top--];
            b = stack[top--]; 
            result = evaluate(b, a, exp[i]);
            stack[++top] = result;
        }
    }

    printf("Result: %d", stack[top]);
    printf("\n\nProgram Made BY : Aadarsan Dahal");
}

int main() {
    char exp[100];
    printf("Enter Postfix expression (e.g., 231*+): ");
    scanf("%s", exp);

    evaluatePostfix(exp);

    getch();
    return 0;
}

