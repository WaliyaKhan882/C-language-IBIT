//Array in Ascending and Descending Order
#include<stdio.h>

int main()
{
   //variable declaration
   int array[5];
   int i;
   int j;
   int temp;
   //user interaction
   printf("enter the elements of an array : \n");
   for(int i=0; i<=4; i++)
   {
    scanf("%d", &array[i]); //taking user input
   }
   printf("the current array is: \n");
   for(int i=0; i<=4; i++)
   {
   printf("%d ", array[i]); //printing the array
   }
   printf("\nwriting the array in ascending and descending order \n");
   printf("ascending order \n");
   for(int i=0; i<=4; i++)
   {
   for(int j=i+1; j<=4 ; j++ )
   {
      if(array[i]>array[j])
      {
         temp=array[i];
         array[i]=array[j];
         array[j]=temp;
      }
   }
   printf("%d ", array[i]); //array in ascending order
   }
   printf("\n descending order \n");
   for(int i=0; i<=4; i++)
   {
      for(int j=i+1; j<=4 ; j++ )
      {
         if(array[i]<array[j])
         {
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
         }
      }
   printf("%d ", array[i]); //array in descending order
   }
   int result;
   result=array[0]+array[1];
   printf("\n%d", result);
   return 0;
} 