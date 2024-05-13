#include<stdio.h>
int sum(int a,int b)
{
    return a + b;
}

int main()
{
    int (*fptr)(int,int);
    fptr=&sum;
    int d=(*fptr)(4,6);
    printf("The sum of two number is %d",fptr(4,6));
    return 0;
}