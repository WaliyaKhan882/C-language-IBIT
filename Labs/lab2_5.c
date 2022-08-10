//Identifying the given triangle is equilateral,scalene or isosceles triangle
#include<stdio.h>
int main() {
	//variable declaration
	int side1, side2, side3;
	//user interaction
	printf("enter the sides length, \n");
	//taking user input
	scanf("%d %d %d", &side1, &side2, &side3);
	//conditions for types of triangle
	if((side1==side2) && (side2==side3))
	{
	printf("the triangle is an equilateral triangle, \n");
	}
	else if((side1==side2) || (side2==side3) || (side3==side1))
	{
	printf("the triangle is an isosceles triangle, \n");
	}
	else
	{
	printf("the triangle is an scalene triangle, \n");
	}
	return 0;
}
