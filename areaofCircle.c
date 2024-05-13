#include<stdio.h>
#include<math.h>
#define PI 3.14
#define square(x) x*x

float edistance(int x1,int x2,int y1,int y2)
{
    float c=pow(x2-x1,2);
    float d=pow(y2-y1,2);
    float e=sqrt(c+d);
    return e;
}
int main()
{
    int x1,y1,x2,y2;
    printf("Enter the point (x1,y1):\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the point (x2,y2):\n");
    scanf("%d%d",&x2,&y2);
    float d=edistance(x1,x2,y1,y2);
    printf("The Euclidean distance is %f\n",d);
    printf("The area of the circle is %f\n",PI*square(d));
    return 0;
}