#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="hrittik";
    char s2[]=" singh";
    // puts(strcat(s1,s2));
    printf("The lenght of s1 is %d\n",strlen(s1));
    printf("The lenght of s2 is %d\n",strlen(s2));
    puts(strrev(s1));
    puts(strrev(s2));
    printf("%d\n",strcmp(s1,s2));
    char s3[45];
    strcpy(s3,strcat(s1,s2));
    printf("%s",s3);
    // char s1[20],s2[20];
    // char s3[]=" is friend of ";
    // char s4[30];
    // gets(s1);
    // gets(s2);
    // strcpy(s4,strcat(s1,s3));
    // puts(strcat(s4,s2));
    // return 0;
}