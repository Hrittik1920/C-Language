#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,m,o;
    printf("Enter the size of array in case of malloc:");
    scanf("%d",&n);
    int*ptr;
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("ptr[%d]=",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    printf("%d ",ptr[i]);
    printf("\n");  printf("Enter the size of array in case of calloc:");
    scanf("%d",&m);
    ptr=(int*)calloc(m,sizeof(int));
    for(int i=0;i<m;i++)
    {
        printf("ptr[%d]=",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<m;i++)
    printf("%d ",ptr[i]);
    printf("\n");
    printf("Enter the size of array:");
    scanf("%d",&o);
    ptr=(int*)realloc(ptr,o*sizeof(int));
    for(int i=0;i<o;i++)
    {
        printf("ptr[%d]=",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<o;i++)
    printf("%d ",ptr[i]);
    free(ptr);
    return 0;
}
