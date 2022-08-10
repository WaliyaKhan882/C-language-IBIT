//Printing 1D Array
#include<stdio.h>

int main()
{
   //variable declaration
   int index;
   int array[index];
   //user interaction
   printf("enter the index of the array: \n");
   //user input
   scanf("%d", &index);
   printf("Enter the elements of array: \n");
   for(int i=0; i<=4; i++)
   {
    scanf("%d", &array[i]); //taking user input
   }
   printf("the current array is: \n");
   for(int i=0; i<=4; i++)
   {
   printf("%d ", array[i]); //printing the array
   }
 return 0;
}