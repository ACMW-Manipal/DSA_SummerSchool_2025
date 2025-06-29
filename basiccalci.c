#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

long long evaluateAddSub(const char *s, int *index, int total_len) {
    long long result = 0;
    long long currentNumber = 0;
    int sign = 1;

    while (*index < total_len) {
        char c = s[*index];

        if (isdigit(c)) {
            currentNumber = currentNumber * 10 + (c - '0');
        } else if (c == '+') {
            result += sign * currentNumber;
            currentNumber = 0;
            sign = 1;
        } else if (c == '-') {
            result += sign * currentNumber;
            currentNumber = 0;
            sign = -1;
        } else if (c == '(') {
            (*index)++;
            currentNumber = evaluateAddSub(s, index, total_len);
        } else if (c == ')') {
            result += sign * currentNumber;
            return result;
        } else if (isspace(c)) {
        } else {
            break;
        }
        (*index)++;
    }
    result += sign * currentNumber;
    return result;
}

int main() {
    char s[1000];

    printf("Enter an expression with only + and -: \n");
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 1;
    }
    s[strcspn(s, "\n")] = 0;

    int index = 0;
    int total_len = strlen(s);

    long long result = evaluateAddSub(s, &index, total_len);

    printf("Result: %lld\n", result);

    return 0;
}