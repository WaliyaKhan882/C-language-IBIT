#include<stdio.h> //Sum of numbers, the program should stop on the input of a negative number
int main() {
int i,number,sum=0;
   for(i=0;i<10;i++)
   {
      printf("enter the number\n");
      scanf("%d", &number);
      if(number<0)
      {
       break;
      } 
     sum = sum + number;
   }
   printf("%d", sum);
 return 0;
}