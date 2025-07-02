#include <stdio.h>
#include <string.h>

void reverse(char str[], int i) {
    int l = strlen(str);
    if (i>= l/ 2)
        return;

    char temp = str[i];
    str[i] = str[l- i- 1];
    str[l - i- 1] = temp;

    reverse(str, i+ 1);
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    reverse(str, 0);

    printf("Reversed string: %s\n", str);
    return 0;
}


