#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    char * operation;
    int n1,n2;
    operation = argv[1];
    n1 = atoi(argv[2]);
    n2 = atoi(argv[3]);

    printf("operaton is %s\n",operation);
    printf("n1 is %d\n",n1);
    printf("n2 is %d\n",n2);

    if(strcmp(operation,"add")==0){
        printf("The sum of %d and %d is %d",n1,n2,n1+n2);
    }
    else if(strcmp(operation,"sub")==0){
        printf("The diff of %d and %d is %d",n1,n2,n1-n2);
    }
    else if(strcmp(operation,"mul")==0){
        printf("The mul of %d and %d is %d",n1,n2,n1*n2);
    }
    else if(strcmp(operation,"div")==0){
        printf("The div of %d and %d is %d",n1,n2,n1/n2);
    }
    return 0;
}
