#include<stdio.h>
int main()
{
    printf("File name is %s\n",__FILE__);
    printf("Today date is %s\n",__DATE__);
    printf("Time now is %s\n",__TIME__);
    printf("Line number is %d\n",__LINE__);
    printf("ANSI:%d",__STDC__);
    return 0;
}