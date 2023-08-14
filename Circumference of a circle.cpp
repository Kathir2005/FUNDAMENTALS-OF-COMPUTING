#include <stdio.h>
int main() 
{
	float pi = 3.14;
	float radius, circumference;
	printf("Enter the radius: ");
	scanf("%f", &radius);
	circumference = 2 * pi * radius;
	printf("\n The circumference of a circle: %.2f",circumference);
	return 0;
}
