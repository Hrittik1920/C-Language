#include <stdio.h>
#define PI 3.14
#define square(x) x*x

int main()
{
    float r;
    printf("radius:\n");
    scanf("%f",&r);
    printf("Area of circle:%f",PI*square(r));
    return 0;
}