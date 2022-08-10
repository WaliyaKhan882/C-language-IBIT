#include<stdio.h>
#include<math.h>
//making function with argument and with return value
int equation_solver(int y)
//equation_solver function name and y is the input taken from user
{
    int a, b, result; //variable declaration
    a = (2 * y) + (35 * y); //step by step solving the linear equation
    b = a%y;
    result = sqrt(b);
    return result; //Returning the value of result
}
int main() {
    int s, answer; //variable declaration
    printf("Enter the value of s\n");
    scanf("%d", &s); //taking the input from user
    equation_solver(s); //calling the function
    printf("%d\n", answer); //printing the output
    return 0;
}