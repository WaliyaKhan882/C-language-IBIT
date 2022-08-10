/*Printing 
        1 
      2 2 2
    3 3 3 3 3
  4 4 4 4 4 4 4
5 5 5 5 5 5 5 5 5*/
#include<stdio.h>
int main() {
// variable declaration
int total_rows,row,space,number,count = 1;
//user interaction
printf("Enter total number of rows : \n");
//user input
scanf("%d", &total_rows);
//for making a pattern for pyramid of numbers
//using for loop
for(row=1; row<=total_rows; row++)
{
    for(space=1; space<=(total_rows-row) ; space++)
    {
    printf("  ");
    }
    for(number=1; number<=((2*row)-1); number++)
    {
    printf("%d ", count);
    }
    printf("\n");
    count++;
}
return 0;
}