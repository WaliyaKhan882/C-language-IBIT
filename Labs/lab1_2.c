//ascii value of a character
#include<stdio.h>
int main() {
	char c[50];
	// c:string given by user
	printf("enter the string = ");
	scanf("%s", &c);
	printf("the ascii value of string is = %d", c[0]);
	return 0;
}
