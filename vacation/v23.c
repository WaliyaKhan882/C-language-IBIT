#include <stdio.h>
//Fibonacci numbers
void main()
{
   int prv=0,pre=1,trm,i,n;
   printf("Input number of terms to  display : ");
   scanf("%d",&n);
   printf("Here is the Fibonacci series upto  to %d terms : \n",n);
   printf("%d %d ", prv,pre);
 
  for(i=3;i<=n;i++)
   {
     trm=prv+pre;
     printf("%d ",trm);
     prv=pre;
     pre=trm;
   }
   printf("\n");
}
