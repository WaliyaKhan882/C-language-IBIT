//Finding the position of largest number in the array
#include<stdio.h>
int main() {
int i, arry[10], position=0, large=0, size;
printf("enter the size of array\n");
scanf("%d", &size);
printf("Enter array elements\n");
for(i=0;i<size;i++)
{
    scanf("%d", &arry[i]);
} 
for(i=0;i<size;i++)
{
    if(arry[i]>large)
    {
        large=arry[i];
        position=i;
    }
} 
printf("position of largest number is %d\n", position);
return 0;
}