#include<stdio.h>
int main()
{
	int n,i,j,sum,sum1=0;
	printf("Enter A Number = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<=i;j++)
		{
			sum=sum+j;
		}
		sum1=sum1+sum;
	}
	printf("The Sum = %d",sum1);
}
