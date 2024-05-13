#include<stdio.h>
int main()
{
    // int a;
    // printf("Enter the number:"); 
    // for(int i=3;i<6;i++)
    // {
    //     for(int j=i;j>0;j--)
    //     printf("*");
    //     printf("\n");
    // }
    char ch;
    scanf("%c",&ch);
    char s[100];
    scanf("%s",&s);
    char sen[100];
    scanf("[^\n]%*c",&sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);   
    return 0;
}
