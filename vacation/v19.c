#include<stdio.h>
//separating even and odd numbers
int main() {
int i,j,arry[10],even, odd;
printf("Enter the array elements\n");
for(i=0; i<10 ; i++)
{
    scanf("%d", &arry[i]);
}
printf("Even numbers are\n");
for(i=0;i<10;i++)
{
    if(arry[i]%2==0)
    {
        even=arry[i];
        printf("%d ", even);
    }
}
printf("\nOdd numbers are\n");
for(i=0;i<10;i++)
{
    if(arry[i]%2!=0)
    {
        odd=arry[i];
        printf("%d ", odd);
    }
}
return 0;
}
