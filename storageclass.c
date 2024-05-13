#include <stdio.h>

// In C language,following storage classes are most oftnely used:
// 1.Automatic Variables(auto storage class) is as same as Local variables
// 2.External Variables(extern storage class) is as same as Global variables
// 3.Static Variables[static storage class](static variables as it name indicate)
// 4.Register Variables
//    1.scope:local to the variable they are declared in
//    2.Default initial Value: Garbage value
//    3.Lifetime: They are available till the end of the function block,in
//                which the variable is defined.
//         Register variable requests the compiler to store the variable in the
//         CPU register instead of storing in the memory to have faster access

int myfunc(int a,int b)
{
    static int sum;
    // sum=a+b;
    return sum;
}
int sum=343;
int main()
{
    // Declaration - Telling the compiler about the variable(No space reseved)
    // Defination - Declaration + space reservation
     int su=myfunc(4,5);
    printf("The sum is %d\n", s);
    return 0;
}