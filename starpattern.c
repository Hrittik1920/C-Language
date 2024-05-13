#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        printf(" ");
        for(int k=0;k<2*i+1;k++)
        printf("*");
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        printf(" ");
        for(int k=2*n-1;k>2*i;k--)
        printf("*");
        printf("\n");
    }
    printf("\n\n\n");
    for(int i=1;i<=n/3;i++)
    {
        for(int j=i;j<=n/3;j++)
        printf("  ");
        for(int j=0;j<2*i+n/3;j++)
        printf("* ");
        for(int j=0;j<2*(n/3-i);j++)
        printf("  ");
        for(int j=0;j<2*i+n/3;j++)
        printf(" *");
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        printf("  ");
        for(int k=2*n-1;k>2*i;k--)
        printf("* ");
        printf("\n");
    }
    return 0;
}