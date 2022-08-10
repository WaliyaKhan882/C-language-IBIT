//Right angle triangle
#include<stdio.h>
int main(){
    //variable declaration
    int total_rows, row = 1, symbol = 1;
    //user interaction
    printf("Enter total number of rows: \n");
    //user input
    scanf("%d", &total_rows);
    //for half pyramid
    //using for loop
    for(int row=1; row<=total_rows; row++) 
    { 
        for(int symbol =1; symbol<=row; symbol++) 
     printf("* ");
     printf("\n");
    }
    return 0;
}