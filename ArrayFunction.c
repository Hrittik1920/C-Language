#include<stdio.h>
// void print_array(int arr[2][5])
// {
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<5;j++)
//         printf("%d ",arr[i][j]);
//         printf("\n");
//     }
// }
// void delete_element(int *ptr)
// {
//     int n;
//     printf("Enter the number you want to delete:");
//     scanf("%d",&n);
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             if(*(ptr+i+j)==n)
//             continue;
//             else
//             printf("%d ",*(ptr+i+j));
//             printf("\n");
//         }
//     }
// }
int func1(int arr[])
{
    for(int i=0;i<5;i++)
    printf("%d ",*(arr+i));
    arr[3]=56;
}
void func2(int *ptr)
{
    for(int i=0;i<5;i++)
    printf("%d ",*(ptr+i));
}
void func3(int arr[2][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        printf("%d ",arr[i][j]);
        printf("\n");
    }
    
}
int main()
{
    int arr[][2]={{4,5},{6,7}};
    func3(arr);
    // int array[2][5]={{5,6,4,7,3},{7,9,20,4,5}};
    // print_array(array);
    // delete_element(&array);
    // int arr[]={5,6,7,8,4};
    // func1(arr);
    // func1(arr);
    // for(int i=0;i<5;i++)
    // printf("%d ",*(arr + i));
    // int n;
    // printf("\nEnter the number you want to delete:");
    // scanf("%d",&n);
    // for(int i=0;i<5;i++)
    // {
    //     if(*(arr+i)==n)
    //     continue;
    //     else
    //     printf("%d ",*(arr+i));
    // }
    return 0;
}