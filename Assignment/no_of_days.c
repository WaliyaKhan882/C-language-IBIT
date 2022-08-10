#include<stdio.h>
int main() {
    //variable declaration for passcode
    int passcode;
    //user interaction
    printf("Hey user, Enter the 4 digit passcode: \n");
    //user input about password
    scanf("%d", &passcode);
    //if passcode is correct, code will run otherwise it will not.
    if(passcode==2002) //correct password
    {
        printf("Valid Passcode \n ");
        //code starts running
        //variable declaration
        int month;
        //user interaction
        printf("Hey user, Enter the month number: \n");
        //use input asking the month number
        scanf("%d", &month);
        //using nested if for finding days in a specific month
        if ((month==1) || (month== 3) || (month==5) || (month==7) || (month==8) || (month==10) || (month==12))
        //condition for months having 31 days
        {
        printf("Days: 31 \n");
        }
        else if (month==2) //condition for 2nd month
        {
            printf("Days: 28 or 29 \n");
        }
        else if((month==4) || (month==6) || (month==9) || (month==11)) 
        // condition for months having 30 days
        {
            printf("Days: 30 \n");
        }
        else
        {
            printf("Invalid input \n"); //in case if user put a number instead of (1-12)
        }
    }
    else //in case of putting wrong passcode, code will not run
    {
        printf("Invalid Passcode \n ");
    }
    return 0;
}