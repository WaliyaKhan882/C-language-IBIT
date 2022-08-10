//days in a specific month using switch statement
#include<stdio.h>
int main() {
    //variable declarattion
    int month;
    //user interaction
    printf("Hello user, please enter the month number(1-12): \n ");
    //user input
    scanf("%d", &month);
//switch statements
switch (month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    printf("Days in this month are 31. \n");
    break;
case 2:
    printf("Days in this month are either 28 or 29. \n");
    break;
case 4:
case 6:
case 9:
case 11:

    printf("Days in this month are 30. \n");
    break;
default:
    break;
}
return 0;
}