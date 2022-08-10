//Simple Calculator for Addition, Subtraction, Multiplication and Division
#include<stdio.h>
int main() {
    //variable declaraction
    char operation;
    double a;
    double b;
    //user interaction 1
    printf("Enter the operation you want to perform(+,-,*,/) : \n");
    //input 1
    scanf ("%c", &operation);
    //user interaction 2
    printf("enter the numbers: \n");
    //input 2
    scanf("%lf %lf", &a, &b);
    //switch statements for calculator
switch(operation)
{
    case '+':
       printf("\n %.1lf+%.1lf= %.1lf \n",a,b,a+b);
       break;
    case '-':
       printf("\n %.1lf-%.1lf= %.1lf \n",a,b,a-b);
       break;
    case '*':
       printf("\n %.1lf*%.1lf= %.1lf \n",a,b,a*b);
       break;
    case '/':
       printf("\n %.1lf/%.1lf= %.1lf \n",a,b,a/b);
       break;
    default:
       printf("error");
       break;
}    
return 0;
}