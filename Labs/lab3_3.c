//Telling either the number is even or odd
#include<stdio.h>
int main() {
    //variable
    int number;
    //user interaction
    printf("Enter the number: \n");
    //input
    scanf("%d", &number);
    //if-else statements with bitwise operator
if(number & 1)
{
    printf("number is odd", number);
}
else
{
    printf("number is even", number);
}
return 0;
}