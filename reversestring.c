#include <stdio.h>
#include <string.h> 

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverseStringRecursive(char *str, int start, int end) {
    if (start >= end) {
        return;
    }
    swap(&str[start], &str[end]);
    reverseStringRecursive(str, start + 1, end - 1);
}

int main() {
    char inputString[100]; 
    int length;

    printf("Enter a string: ");
    if (fgets(inputString, sizeof(inputString), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }
    length = strlen(inputString);
    if (length > 0 && inputString[length - 1] == '\n') {
        inputString[length - 1] = '\0';
        length--; 
    }
    printf("Original string: %s\n", inputString);
    if (length > 0) { 
        reverseStringRecursive(inputString, 0, length - 1);
    }

    printf("Reversed string: %s\n", inputString);

    return 0;
}