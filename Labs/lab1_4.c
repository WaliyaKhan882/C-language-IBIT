//total number of cars for a given number of passengers (one bus only 5 passengers)
#include<stdio.h>
#include<math.h>
int main() {
	int a;
	// a ---> number of passengers
	printf("enter number of passengers = ");
	scanf("%d", &a);
	float b;
	// b ---> numbers of cars for all passengers
	b = a/5.0;
	int c;
	// c ---> rounding up the number of cars using ceil
	c = ceil(b);
	printf("number of cars is = %d", c);
	
    return 0;
}
