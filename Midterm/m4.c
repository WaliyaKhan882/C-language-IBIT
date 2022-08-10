#include<stdio.h>
void square_printer(int total_rows) //function for printing hollowsquare 
{
    //variable declaration
    int row=0, space=0,symbol=0;
    for(row=0;row<total_rows;row++)
    {
        for(symbol=0;symbol<total_rows;symbol++)
        {
            //conditions to print the symbol at right places to make a hollow square
            if((row==0) || (row==total_rows-1) || (symbol==0) || (symbol==total_rows-1))
            {printf(" *");}
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main() {
    //variable declaration
    int total_rows;
    //user interaction
    printf("Enter the number of total rows\n");
    //taking input from user
    scanf("%d", &total_rows);
    //calling the function
    square_printer(total_rows);
    return 0;
}