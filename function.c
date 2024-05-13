#include<stdio.h>
void printstar(int a)
{
    for(int i=0;i<a;i++)
    printf("*");
}

int typenumber()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    return n;
}

void my_name()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("The entered number is %d",a);
}
int main()
{
    // int c;
    // // int a,b;
    // // printf("Enter the numbers: ");
    // // scanf("%d %d",&a,&b);
    // // printf("Sum is %d",sum(a,b));
    // c = typenumber();
    // printf("The entered number is %d",c);
    my_name();
    return 0;
}

int sum(int a,int b)
{
    return a+b;
}