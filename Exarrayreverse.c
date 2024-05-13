#include<stdio.h>
#include<string.h>
void reversearray(int arr[])
{
    printf("\n\n");
    int temp;
    for(int i=0;i<8/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[7-i];
        arr[7-i]=temp;
    }
}
void rev_2Darray(int arr[3][6])
{
    for(int i=0;i<1;i++)
    {
        for(int j=0;j<6;j++)
        {
            int temp;
            temp=arr[i][j];
            arr[i][j]=arr[2-i][5-j];
            arr[2-i][5-j]=temp;
        }
        for(int i=0;i<1;i++)
        {
            for(int j=0;j<6/2;j++)
            {
                int temp;
                temp=arr[1][j];
                arr[1][j]=arr[1][5-j];
                arr[1][5-j]=temp;
            }
        }
    }
}
int main()
{
    int arr[3][6]={{3,6,2,4,9,5},{7,10,5,6,4,8},{6,7,11,45,6,7}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<6;j++)
        printf("%d ",arr[i][j]);
        printf("\n");
    }
    rev_2Darray(arr);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<6;j++)
        printf("%d ",arr[i][j]);
        printf("\n");
    }
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<6;j++)
    //     {
    //         printf("%d ",arr[1-i][5-j]);
    //     }
    //     printf("\n");
    // }
    // int arr[]={3,4,6,7,8,10,5,6};
    // for(int i=0;i<8;i++)
    // printf("%d ",arr[i]);
    // reversearray(arr);
    // for(int i=0;i<8;i++)
    // printf("%d ",arr[i]);

    return 0;
}