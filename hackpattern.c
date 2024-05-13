#include<stdio.h>
int main()
{
    int n,i,j,k,l=0;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)
    {
        if(i<=n)
        l++;
        else
        l--;
        k=n;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=l && j<=2*n-l)
            printf("%d ",k);
            else
            {
                if(j<n)
                {
                    printf("%d ",k);
                    k--;
                }
                else
                {
                    k++;
                    printf("%d ",k);
                }
            }
        }
        printf("\n");
    }
    return 0;
}