#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter The First Digit = ");
	scanf("%d",&a);
	printf("Enter The Second Digit = ");
	scanf("%d",&b);
	printf("Enter The Third Digit = ");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("A Is The Greatest Number Which Is %d",a);	
	}	
	else if(b>a&&b>c)
	{
		printf("B Is The Greatest Number Which Is %d",b);	
	}
	else if(c>a&&c>b)
	{
		printf("C Is The Greatest Number Which Is %d",c);	
	}
}
