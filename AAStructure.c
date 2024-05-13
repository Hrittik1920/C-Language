#include<stdio.h>
#include<string.h>
struct Employee 
{
    int id;
    char name[100];
    int marks;
    char fav_char;
};
int main()
{
    struct Employee h1,m1;
    h1.id=1;
    m1.id=2;
    h1.marks=97;
    m1.marks=96;
    h1.fav_char='a';
    m1.fav_char='c';
    strcpy(h1.name,"Hrittik Singh");
    strcpy(m1.name,"Madav Yadav");
    printf("ID:%d\nName:%s\nMarks:%d\nFav_char=%c\n",h1.id,h1.name,h1.marks,h1.fav_char);
    printf("ID:%d\nName:%s\nMarks:%d\nFav_char=%c\n",m1.id,m1.name,m1.marks,m1.fav_char);
    return 0;
}