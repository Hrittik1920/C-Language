#include <stdio.h>
int main()
{
    int age;
    for (int i = 0; i < 10; i++)
    {
        // printf("Enter the age:");
        // scanf("%d", &age);
        // if(age>10)
        // continue;
        // printf("You are still a kids\n");
        // printf("Do not go outside of your house without asking your parents\n");
        for (int j = 0; j < 4; j++)
        {
            printf("Enter you age:");
            scanf("%d", &age);
            if (age < 10)
                break;
            if (age == 45)
                goto end;
        }
    }
end:

    return 0;
}