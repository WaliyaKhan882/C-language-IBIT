//finding the largest number out of three numbers asked from users
#include<stdio.h>
int main() {
	int a;
	int b;
	int c;
	printf("enter number 1, \n");
	scanf("%d", &a);
	printf("enter number 2, \n");
	scanf("%d", &b);
	printf("enter number 3, \n");
	scanf("%d", &c);
	if((a>=b)&&(a>=c))
{
	printf("/n %d is the largest number");
}
	else if((b>=a)&&(b>=c))
{
	printf("/n %d is the largest number");
}
    else if((c>=a)&&(c>=b))
{
	printf("/n %d is the largest number");
}
   return 0;
}
