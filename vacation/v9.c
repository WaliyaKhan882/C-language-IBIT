#include <stdio.h> //priting the sum of pattern 9 99 999 9999

int main()
{   int n,i,t=9;
	int sum =0;
	printf("Input the number or terms :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{ 
	  printf("%d ",t);
	  t=t*10+9;
      sum = sum +t;
	}
	printf("\nThe sum of the series = %d \n",sum);
} 