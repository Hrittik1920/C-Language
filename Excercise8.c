#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// pahle scanf me jese hi apne enter key dbaya,wo input will go to ***input buffer***
// ,then the next scanf with **%c** will take that *enter* as input so it will get
// disepear,so to takle that problem we use **getchar()** 
int main()
{
    int n, i = 0;
    char *ptr;
    char a,b;
    while (i < 3)
    {
        printf("Employee %d:\nEnter the number of character in your Employ Id\n", i + 1);
        scanf("%d", &n);
        getchar();
        printf("Enter the value of a\n");
        scanf("%c",&a);
        getchar();
        printf("Enter the value of b\n");
        scanf("%c",&b);
        ptr = (char *)malloc((n + 1) * sizeof(char));
        printf("Enter your Employee Id\n");
        scanf("%s", ptr);
        printf("Your employ Id is:%s\n", ptr);
        free(ptr);
        i = i + 1;
    }
    return 0;
}