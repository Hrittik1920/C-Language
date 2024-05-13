#include<stdio.h>
int main()
{
    // int a=7;
    // int *ptra=&a;
    // printf("%d\n",ptra);
    // ptra++;
    // printf("%d\n",ptra);
    // printf("%d\n",ptra+=3);
    // int array[] = {4,6,7,10,5};
    // for(int i=0;i<5;i++)
    // printf("%d ",array[i]);
    // printf("%d\n",array[3]);
    // printf("%d\n",*(array+3));
    int array[] = {4,6,7,10,5};
    for(int i=0;i<5;i++)
    printf("%d ",array[i]);
    int n;
    printf("\nEnter the number you want to erras:");
    scanf("%d",&n);
    for(int i=0;i<5;i++)
    {
        if(*(array+i)==n)
        continue;
        else
        printf("%d ",array[i]);
    }
    
    // int array[] = {4,6,7,10,5};
    // int *arrayptr = array;
    // printf("Array at positon 1 is %d\n",array[0]);
    // printf("The address of 1st element of array is %d\n",&array[0]);
    // printf("The address of 1st element of array is %d\n",array);
    // printf("The address of 2st element of array is %d\n",&array[1]);
    // printf("The address of 2st element of array is %d\n",array + 1);
    // // array++; [this line will through error]

    // printf("Array at positon 1 is %d\n",array[0]);
    // printf("The value of 1st element of array is %d\n",*(&array[0]));
    // printf("The value of 1st element of array is %d\n",*(array));
    // printf("The value of 2st element of array is %d\n",*(&array[1]));
    // printf("The value of 2st element of array is %d\n",*(array + 1));
    // return 0;
}
