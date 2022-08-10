#include<stdio.h> //Sum of 10 numbers , the program should ignore the negative numbers
int main() {
int i,number,sum=0;
   for(i=0;i<5;i++)
   {
      printf("enter the number\n");
      scanf("%d", &number);
      if(number<0)
      {
       continue;
      } 
     sum = sum + number;
   }
   printf("%d", sum);
 return 0;
}