#include<stdio.h>

int main()
{
        int n,s,sum=0,i,j;

        printf("\nEnter value for n = ");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
    {
                s=0;
                for(j=1;j<=i;j++)
                {
                    s=s+j;
                }
                sum=sum+s;
        }

        printf("\nThe Sum of Series up to Value [ %d ] = [ %d ]\n",n,sum);

        return 0;
}
