#include <stdio.h>

int fact(int n)
{
    if (n == 1 || n == 2)
        return n;
    else
        return n * fact(n - 1);
}

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
        return n - 1;
    else
        return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    printf("The factorial of %d is %d\n", a, fact(a));
    printf("The %d term of fibonacci series is %d\n", a, fib_iterative(a));
    printf("The %d term of fibonacci series is %d\n", a, fib_recursive(a));
    for (int i = 1; i <= a; i++)
        printf("%d  ", fib_recursive(i));
    return 0;
}