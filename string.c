#include<stdio.h>

int main()
{
    int one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,zero=0;
    char str[100];
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='1')
        one++;
        else if(str[i]=='2')
        two++;
        else if(str[i]=='3')
        three++;
        else if(str[i]=='4')
        four++;
        else if(str[i]=='5')
        five++;
        else if(str[i]=='6')
        six++;
        else if(str[i]=='7')
        seven++;
        else if(str[i]=='8')
        eight++;
        else if(str[i]=='9')
        nine++;
        else if(str[i]=='0')
        zero++;
        else
        continue;
    }
    printf("\n%d %d %d %d %d %d %d %d %d %d",one,two,three,four,five,six,seven,eight,nine,zero);
    return 0;
}


// char str[8]="hrittik";


// printf("using print %s\n",str);
    // // printstr(str);
    // printf("Using puts: \n");
    // puts(str);
    // for(int i=0;str[i]!='\0';i++)
    // printf("%c",str[i]);




// #include<stdio.h>
// int main()
// {
//     int one=0,zero=0;
//     char value[50];
//     gets(value);
//     int i=0;
//     while(value[i]!='\0')
//     {
//         printf("%c",value[i]);
//         i++;
//     }
//     int j=0;
//     while(value[j]!='\0')
//     {
//         if(value[i]==1)
//         {
//             one++;
//             continue;
//         }
//         else
//         {
//             zero++;
//             continue;
//         }
//     }
//     printf("%d %d",zero,one);
//     return 0;
// }bbbhbhgghvbhnhgvbg
void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}



























































































































