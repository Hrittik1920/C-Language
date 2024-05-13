#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    // int a=3;
    // int *ptr1=NULL;
    // int *ptr=&a;
    // printf("%d\n",ptr);
    // printf("%d\n",*ptr);
    // ptr++;
    // printf("%d\n",ptr1);
    int *ptr=(int*)malloc(3*sizeof(int));
    for(int i=0;i<3;i++)
    scanf("%d",&ptr[i]);
    for(int i=0;i<3;i++)
    printf("%d ",ptr[i]);
    free(ptr);
    ptr=NULL;
    for(int i=0;i<3;i++)
    printf("%d ",&ptr[i]);
    return 0;
}