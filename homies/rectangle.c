//Function to find the perimeter of a rectangle
#include<stdio.h>
int perimeter(int length, int width)
{
    printf("enter the length and width of rectangle to find the perimeter\n");
    scanf("%d %d", &length, &width);
    int result;
    result= 2*(length+width);
    return result;
}
int main() {
    int a;
    int b;
    int result;
    result=perimeter(a,b);
    printf("perimeter is : %d\n", result);
    return 0;
}