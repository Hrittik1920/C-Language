#include<stdio.h>
int main()
{
    // int n;
    // printf("Enter the number:");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++)
    // printf("* ");
    // for(int i=0;i<n-2;i++)
    // {
    //     printf("* ");
    //     for(int j=0;j<n-1;j++)
    //     printf("  ");
    //     printf("* ");
    //     printf("\n");
    // }
    // for(int i=0;i<n;i++)
    // printf("* ");
    // return 0;
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    printf("%d X %d = %d\n",a,i,a*i);
    return 0;
}