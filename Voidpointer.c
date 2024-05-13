#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a=7;
    float b=5.66;
    void *ptr;
    ptr=&a;
    printf("The value of a is %d\n",*((int*)ptr));
    ptr=&b;
    printf("Tne value of b is %f\n",*((float*)ptr));
    return 0;
}