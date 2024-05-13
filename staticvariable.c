#include <stdio.h>
#include <string.h>
// int increment()
// {
//     static int b=34;
//     b++;
//     return b;
// }
// int ret()
// {
//     return 3;
// }
int b = 34;
int func1(int b)
{
    static int myvar = 6;
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    return b + myvar;
}

int main()
{
    int b = 344;
    int var = func1(b);
    var = func1(b);
    var = func1(b);
    var = func1(b);
    var = func1(b);
    var = func1(b);
    // int a=increment();
    // printf("%d\n",a);
    // a=increment();
    // printf("%d\n",a);
    // a=increment();
    // printf("%d\n",a);

    return 0;
}