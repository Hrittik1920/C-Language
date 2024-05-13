#include<stdio.h>
int main()
{
    // typedef <previous_name> <alias_name>;
    // typedef unsigned long ul;
    // typedef int integer;
    // integer a=4;
    // printf("%d",a);
    // ul l1,l2,l3;
    // int* a,b;
    typedef int* pointer;
    pointer a,b;
    int c=67;
    a=&c;
    b=&c;
    return 0;
}