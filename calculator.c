#include <stdio.h>
#include <ctype.h>

int i = 0;

int calculate(const char *s);

int getNumber(const char *s)
{
    int num = 0;
    while (isdigit(s[i])) 
{
        num = num * 10 + (s[i] - '0');
        i++;
    }
    return num;
}

int calculate(const char *s)
{
    int result = 0;
    int sign = 1;

    while (s[i] != '\0') 
{
        char ch = s[i];

        if (isdigit(ch)) 
{
            int num = getNumber(s);
            result += sign * num;
        } 
else if (ch == '+')
{
            sign = 1;
            i++;
        } 
else if (ch == '-')
{
            sign = -1;
            i++;
        } 
else if (ch == '(') 
{
            i++;  
            int val = calculate(s);  
            result += sign * val;
        } 
else if (ch == ')') 
{
            i++;  
            return result;
        } 
else 
{
            i++;  
        }
    }

    return result;
}

int main()
{
    char expr[100];
    printf("Enter expression: ");
    fgets(expr, sizeof(expr), stdin);

    i = 0;
    int ans = calculate(expr);
    printf("Result: %d\n", ans);
    return 0;
}
Footer
© 2025 GitHub, In
