#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
// int main()
// {
//     int a;
//     printf("E>nt to randomly get numbers:\n");
//     scanf("%d>
//     printf("T> is %d\n",a,generateRandomNumber(a));
//     return 0;
// }
int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand take seed as a input and it is defined in stdlib.h
    return rand()%n;
}
int main()
{
    int n,c,you=0,comp=0;
    printf("Welcome to Rock,Paper and Scissor Game\n");
    for(int i=0;i<3;i++)
    {
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissor:");
        scanf("%d",&n);
        char dict[3] = {'r','p','s'};
        c = generateRandomNumber(2);
        printf("You choose:%c\nComputer choose:%c\n",dict[n-1],dict[c]);
        if(dict[n-1]==dict[c])
        {
            you++;
            comp++;
            printf("Score:\nYou:%d\nComputer:%d",you,comp);
        }
    }
    return 0;
}