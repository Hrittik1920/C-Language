#include <stdio.h>
#include <string.h>

struct Driver
{
    char name[34];
    char DLno[34];
    char route[45];
    float km;
} s[2];
int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the details of %dst driver:-\n",i+1);
        printf("Name:");
        gets(s[i].name);
        printf("Driver Licence No.:");
        gets(s[i].DLno);
        printf("Route:");
        gets(s[i].route);
        printf("Enter total no. of km you have traveled:");
        scanf("%f", &s[i].km);
        getchar();
        printf("\n");
    }
    printf("************Driver Details**************\n");
    for(int i=0;i<3;i++)
    printf("Employ %d:\nName:%s\nDriver Licence No.:%s\nRoute:%s\nkm:%f\n",i+1, s[i].name, s[i].DLno, s[i].route, s[i].km);
    return 0;
}
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// struct Driver
// {
//     char name[34];
//     char dlno[30];
//     char route[50];
//     int kms;
//     char fav_char;
// };
// int main()
// {
//     struct Driver d1,d2,d3;
//     printf("Enter the details of drivers No 1\n");
//     printf("Enter the name of 1st driver\n");
//     scanf("%s",&d1.name);

//     printf("Enter the dlno of 1st driver\n");
//     scanf("%s",&d1.dlno);

//     printf("Enter the route of 1st driver\n");
//     scanf("%s",&d1.route);

//     printf("Enter the kms of 1st driver\n");
//     scanf("%d",&d1.kms);

//     printf("Enter the favorit character of 1st driver\n");
//     scanf("%c",&d1.fav_char);

//     printf("Enter the details of drivers No 2\n");
//     printf("Enter the name of 2st driver\n");
//     scanf("%s",&d2.name);

//     printf("Enter the dlno of 2st driver\n");
//     scanf("%s",&d2.dlno);

//     printf("Enter the route of 2st driver\n");
//     scanf("%s",&d2.route);

//     printf("Enter the kms of 2st driver\n");
//     scanf("%d",&d2.kms);

//     printf("Enter the details of drivers No 3\n");
//     printf("Enter the name of 3st driver\n");
//     scanf("%s",&d3.name);

//     printf("Enter the dlno of 3st driver\n");
//     scanf("%s",&d3.dlno);

//     printf("Enter the route of 3st driver\n");
//     scanf("%s",&d3.route);

//     printf("Enter the kms of 3st driver\n");
//     scanf("%d",&d3.kms);

//     return 0;
// }