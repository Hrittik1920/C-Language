#include<stdio.h>
// void swap(int *x,int *y)
// {
//     int temp;
//     temp = *x;
//     *x=*y;
//     *y=temp;
//     return;
// }
// int swap1(int x,int y)
// {
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
//     return x,y;
// }
// void changenumber(int *b)
// {
//     *b=56;
// }
void changenumber(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-2*(*y);
}
int main()
{

    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d and %d",a,b);
    // swap(&a,&b);
    // printf("\n%d and %d",a,b);
    // int a=4;
    // printf("%d",a);
    // changenumber(&a);
    // printf("\n%d",a);
    changenumber(&a,&b);
    printf("\n%d and %d",a,b);
    return 0;
}