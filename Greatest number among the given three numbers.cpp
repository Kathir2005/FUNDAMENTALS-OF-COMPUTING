#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the First Digit: ");
	scanf("%d", &a);
	printf("Enter the Second Digit: ");
	scanf("%d", &b);
	printf("Enter the Third Digit: ");
	scanf("%d", &c);
	if (a>b && a>c)
	{
	printf("a is the Greatest number which is %d",a);
	}
	else if(b>a && b>c)
	{
	printf("b is the Greatest number which is %d",b);
	}
	else if(c>a && c>b)
	{
	printf("c is the Greatest number which is %d",c);
	}
}
