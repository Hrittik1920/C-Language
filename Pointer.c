#include<stdio.h>
int main()
{
    int a=4;
    printf("the value of a is %d\n",a);
    int *ptra=&a;
    printf("The value of a through pointer is %d\n",*ptra);
    printf("address of a is %d\n",&a);
    printf("Address of a by pointer is %d\n",ptra);
    printf("The address of pointer itself is %d\n",&ptra);
    return 0;
}