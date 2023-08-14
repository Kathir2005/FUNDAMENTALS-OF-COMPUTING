#include <stdio.h>
#include <string.h>

int main() {
	char str1[20];
	char str2[20];
	
	printf("Enter two strings\n");
	gets(str1);
	gets(str2);
	
	printf("\nConcatenation of str1 and str2 is %s",strcat(str1,str2));
}

