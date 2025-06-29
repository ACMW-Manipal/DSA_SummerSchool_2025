#include <stdio.h>
#include <stdlib.h>

int octalToDecimalRecursive(int octalNum) {
    if (octalNum == 0) {
        return 0;
    }
    int lastDigit = octalNum % 10;
    int remainingOctal = octalNum / 10;
    return octalToDecimalRecursive(remainingOctal) * 8 + lastDigit;
}

int main() {
    int octalNumber;
    int decimalNumber;

    printf("Enter an octal number\n");
    scanf("%d", &octalNumber);

    int tempOctal = octalNumber;
    while (tempOctal > 0) {
        if (tempOctal % 10 >= 8) {
            printf("Error: Invalid octal number. Digits must be 0-7.\n");
            return 1;
        }
        tempOctal /= 10;
    }

    decimalNumber = octalToDecimalRecursive(octalNumber);

    printf("The decimal equivalent of octal %d is: %d\n", octalNumber, decimalNumber);

    return 0;
}