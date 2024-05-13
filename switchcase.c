#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("Enter the operator: ");
    scanf("%c", &op);
    printf("Number 1: ");
    scanf("%d", &a);
    printf("Number 2: ");
    scanf("%d", &b);
    switch (op)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '/':
        printf("%d / %d = %d", a, b, a / b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    }
}