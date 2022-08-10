//Sum of two numbers
#include<stdio.h>
int main() {
    //variable declaration
    int number1,number2, sum;
    //user interaction and taking input
    printf("enter the numbers: \n");
    scanf("%d %d", &number1, &number2);
    //addition as output
    //formula
    sum = number1 + number2;
    printf("%d", sum);
    return 0;
}