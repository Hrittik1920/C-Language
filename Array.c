#include<stdio.h>
int main()
{
    // int marks[5];
    // for(int i=0;i<5;i++)
    // scanf("%d",&marks[i]);
    // for(int i=1;i<=5;i++)
    // printf("Marks of roll no %d is %d\n",i,marks[i]);
    // int matrix[2][5]={{12,3,4,5,6},{56,7,8,44,6}};
    int matrix[2][4];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        scanf("%d",&matrix[i][j]);
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d  ",matrix[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}