//Printing the Diamond pattern
#include<stdio.h>
int main() {
    int total_rows;
    scanf("%d", &total_rows);
    int row=1, spaces, symbol=1;
    if(total_rows%2==0)
    {
    for(int row=1; row<total_rows; row++)
    {
        for(spaces=1;spaces<=(total_rows-row); spaces++)
        {
            printf("  ");
        }
        for(symbol=1;symbol<=(2*row)-1; symbol++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(int row=total_rows; row>=0; row--)
    {
        for(spaces=1;spaces<=(total_rows-row); spaces++)
        {
            printf("  ");
        }
        for(symbol=1;symbol<=(2*row)-1; symbol++)
        {
            printf(" *");
        }
        printf("\n");
    }
    }
    else{
        printf("pay for the diamond ;)");
    }
    return 0;
}