#include <stdio.h>
#define MAX 100

// Stack definition
char stack[MAX];
int top = -1;

// Push operation
void push(char ch) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = ch;
}

// Pop operation
char pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return '\0';
    }
    return stack[top--];
}

// Reverse string using stack
void reverseString(char str[]) {
    int i = 0;

    // Push all characters to stack
    while (str[i] != '\0') {
        push(str[i]);
        i++;
    }

    // Pop all characters back to the string
    i = 0;
    while (top != -1) {
        str[i++] = pop();
    }

    str[i] = '\0'; // null-terminate the reversed string
}

int main() {
    char str[MAX];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

