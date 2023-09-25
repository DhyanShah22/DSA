#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Define the stack structure
struct Stack {
    char *items;
    int top;
    int maxSize;
};

// Function to initialize the stack
struct Stack *createStack(int maxSize) {
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->maxSize = maxSize;
    stack->items = (char *)malloc(sizeof(char) * maxSize);
    return stack;
}

// Function to check if the stack is empty
bool isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
bool isFull(struct Stack *stack) {
    return stack->top == stack->maxSize - 1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, char value) {
    if (!isFull(stack)) {
        stack->items[++stack->top] = value;
    }
}

// Function to pop an element from the stack
char pop(struct Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->items[stack->top--];
    }
    return '\0'; // Return null character to indicate an error
}

// Function to get the precedence of an operator
int getPrecedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    } else if (op == '*' || op == '/') {
        return 2;
    }
    return 0;
}

// Function to convert infix expression to postfix
char *infixToPostfix(const char *infix) {
    int len = strlen(infix);
    struct Stack *stack = createStack(len);
    char *postfix = (char *)malloc(sizeof(char) * (len + 1));
    int j = 0; // Index for the postfix expression

    for (int i = 0; i < len; i++) {
        char c = infix[i];
        if (isalnum(c)) {
            postfix[j++] = c;
        } else if (c == '(') {
            push(stack, c);
        } else if (c == ')') {
            while (!isEmpty(stack) && stack->items[stack->top] != '(') {
                postfix[j++] = pop(stack);
            }
            pop(stack); // Pop the '('
        } else {
            while (!isEmpty(stack) && getPrecedence(c) <= getPrecedence(stack->items[stack->top])) {
                postfix[j++] = pop(stack);
            }
            push(stack, c);
        }
    }

    while (!isEmpty(stack)) {
        postfix[j++] = pop(stack);
    }

    postfix[j] = '\0'; // Null-terminate the postfix expression
    free(stack->items);
    free(stack);

    return postfix;
}

int main() {
    const char *infixExpression = "A + B * (C - D) / E";
    char *postfixExpression = infixToPostfix(infixExpression);

    printf("Infix Expression: %s\n", infixExpression);
    printf("Postfix Expression: %s\n", postfixExpression);

    free(postfixExpression);

    return 0;
}