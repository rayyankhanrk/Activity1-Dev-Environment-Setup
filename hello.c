#include <stdio.h>

void greet(char name[]) {
    printf("Welcome, %s!\n", name);
}

int main() {
    printf("Hello, World!\n");

    greet("Rayyan");

    return 0;
}