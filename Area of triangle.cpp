#include <stdio.h>
#include <math.h>
int main() {
	int a, b, c;
	float s, d, area;
	printf("Enter Three Sides: ");
	scanf("%d %d %d",&a,&b,&c);
	s = (a+b+c)/2;
	d = (s*(s-a)*(s-b)*(s-c));
	area = sqrt(d);
	printf("Area of Triangle = %f sq units \n",area);
}
