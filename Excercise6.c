#include<stdio.h>
#include<string.h>
void parser(char arr[])
{
    int in=0;
    int index=0;
    for(int i=0;i<strlen(arr);i++)
    {
        if(arr[i]=='<')
        {
            in=1;
            continue;
        }
        else if(arr[i]=='>')
        {
            in=0;
            continue;
        }
        if(in==0)
        {
            arr[index]=arr[i];
            index++;
        }
    }
    arr[index]='\0';
    while(arr[0]==' ')
    {
        for(int i=0;i<strlen(arr);i++)
        arr[i]=arr[i+1];
    }
    while(arr[strlen(arr)-1]==' ')
    {
        arr[strlen(arr)-1]='\0';
    }
}
int main()
{
    char arr[40];
    gets(arr);
    puts(arr);
    parser(arr);
    printf("After parser  ~~~~%s~~~",arr);
    return 0;
}