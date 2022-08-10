//perimeter of a rectangle
#include<stdio.h>

int main() {
	
	int a;
	// a ---> length of rectangle
	printf("enter the length of rectangle = ");
	scanf("%d", &a);
	
	int b;
	// b ---> width of rectangle
	printf("enter the width of rectangle = ");
	scanf("%d", &b);
	
	int c;
	// c ---> perimeter of rectangle
	// Formula of Perimeter of rectangle ---> 2(L + W)
	c=(a+b)*2;
	printf("Perimeter of rectangle is = %d", c);
	
	return 0;
	
}
