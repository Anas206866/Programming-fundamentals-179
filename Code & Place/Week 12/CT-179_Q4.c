//Q4: Function that takes a char pointer and prints the character it points to
#include <stdio.h>

void printChar(char *p) {
    printf("Character pointed to: %c\n", *p);
}

int main() {
    char ch = 'Z';

    printChar(&ch);  // pass address of char

    return 0;
}

