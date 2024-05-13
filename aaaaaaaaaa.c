#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,a,b,m;
    scanf("%d",&n);
    int *x=(int*)malloc(n*sizeof(int));
    int *y=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    scanf("%d",&m);
    float *dist=(float*)malloc(n*sizeof(float));
    for(int i=0;i<n;i++)
    {
        a=pow(x[i],2);
        b=pow(y[i],2);
        dist[i]=sqrt(a+b);
    }
    for(int i=0;i<n;i++)
    printf("%f  ",dist[i]);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    free(x);
    free(y);
    free(dist);
    return 0;
}
