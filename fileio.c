#include<stdio.h>

int main()
{
    FILE *ptr=NULL;
    // char string[34]="This is the new string";
    // // ptr=fopen("myfile.txt","r");
    // // fscanf(ptr,"%s",string);
    // // printf("The content in file is %s\n",string);
    // ptr=fopen("myfile.txt","a");
    // fprintf(ptr,"%s",string);
    ptr=fopen("myfile.txt","w");
    // char c = fgetc(ptr);
    // // printf("The character I read was %c\n",c);
    // // c = fgetc(ptr);
    // // printf("The character I read was %c\n",c);

    // char str[12];
    // fgets(str,11,ptr);
    // printf("The string is %s\n",str);

    fputs('o',ptr)
    fclose(ptr);
    return 0;
}