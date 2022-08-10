#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
    //variable declaration
    char pass[100];
    char passcode[100]="developer";
    int i;
    //user interaction
    printf("Enter the passcode: \n");
    //user input
    scanf("%s",&pass);
    i = strcmp(pass,passcode); //comparing for checking the right or wrong passcode
    printf("%d \n", i);
    if (i==0) //correct passcode
    {
        printf("valid passcode \n");
        //variable declaration
        int function;
        //user interaction
        printf("Hey user, enter 1 for addition, 2 for subtraction,3 for division, 4 for multiplication, 5 for power, 6 for sin of number, 7 for cos of a number, 8 for tan of a number, 9 for absolute value of number \n");
        //user input
        scanf("%d", &function);
        //using nested if for making a calculator for performing the above mentioned mathematical calculations
        if(function==1) //addition
        {
            //variable declaration
            float x;
            float y;
            float z;
            //user interaction
            printf("Enter the numbers: \n");
            //user input
            scanf("%f %f", &x, &y);
            //formula
            z = x + y;
            printf("sum = %.2f \n", z);
        }
        else if(function==2) //subtraction
        {
           //variable declaration
            float x;
            float y;
            float z;
            //user interaction
            printf("Enter the numbers: \n");
            //user input
            scanf("%f %f", &x, &y);
            //formula
            z = x - y;
            printf("subtraction = %.2f \n", z); 
        }
        else if (function==3) //division
        {
            //variable declaration
            float x;
            float y;
            float z;
            //user interaction
            printf("Enter the numbers: \n");
            //user input
            scanf("%f %f", &x, &y);
            //formula
            z = x/y;
            printf("division = %.2f \n", z);
        }
        else if(function==4) //multiplication
        {
           //variable declaration
            float x;
            float y;
            float z;
            //user interaction
            printf("Enter the numbers: \n");
            //user input
            scanf("%f %f", &x, &y);
            //formula
            z = x * y;
            printf("multiplication = %.2f \n", z);
        }
        else if(function==5) //power
        {
            //variable declaration
            float x;
            float y;
            float z;
            //user interaction
            printf("Enter the numbers: \n");
            //user input
            scanf("%f %f", &x, &y);
            //formula
            z = pow(x,y);
            printf("x raise to the power y = %.2f \n", z);
        }
        else if(function==6) //sin of a number
        {
            //variable declaration
            double x;
            double y;
            //user interaction
            printf("Enter the numbers: \n");
            //user input
            scanf("%lf", &x);
            //formula
            y = sin(x);
            printf("sin= %.2lf \n", y);
        }
        else if(function==7) //cos of a number
        {
            //variable declaration
            double x;
            double y;
            //user interaction
            printf("Enter the numbers: \n");
            //user input
            scanf("%lf", &x);
            //formula
            y = cos(x);
            printf("cos = %.2lf \n", y);
        }
        else if(function==8) //tan of a number
        {
            //variable declaration
            double x;
            double y;
            //user interaction
            printf("Enter the numbers: \n");
            //user input
            scanf("%lf", &x);
            //formula
            y = tan(x);
            printf("tan = %.2lf \n", y);
        }
        else if(function==9) //absolute value
        {
            //variable declaration
            int x;
            int y;
            //user interaction
            printf("Enter the number: \n");
            //user input
            scanf("%d", &x);
            //formula
            y = abs(x);
            printf("abs = %d \n", y);
        }
        else //if user typed any other number than the given shape numbers
        {
            printf("please enter the correct shape number \n");
        }
    }
    else //wrong passcode
    {
        printf("invalid passcode \n");
    }
    return 0;
}