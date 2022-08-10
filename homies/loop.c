// Median, Mode
#include<stdio.h>
int main() {
    int size=6;
    int array[100];
    int i;
    printf("enter the array numbers: \n");
    for(int i=0;i<size;i++)
    {
        scanf(" %d", &array[i]);
    }
    printf("the array is: \n");
    for(int i=0;i<size;i++)
    {
        printf(" %d\n", array[i]);
    }
int j=0;
int temp;
int order;
printf("array in ascending order: \n");
for(i=0;i<size;i++)
{
    for(j=i+1;j<size;j++)
    {
       if(array[i]>array[j])
       {
         temp= array[i];
         array[i]=array[j];
         array[j]=temp;
       }
    }
    printf("%d \n", array[i]);
}
float median;
float mid_term=0;
if(size%2 ==0)
{
    temp=(size/2)-1;
    if((temp==i) || ((temp+1)==i))
    {
        for(int i=0; i<size; i++)
        {
            mid_term=mid_term+array[i];
        }
    }
    median=mid_term/2;
    printf("median is:%.2f\n", median);
}
else
{
    temp=size/2;
    for(int i=0;i<size; i++)
    {
        if(temp==i)
        {
           mid_term=array[i];
        }
    }
    median=mid_term/2;
    printf("%.2f\n",median);
}
int mode=0;
int max=0;
int count=0;
for(int i = 0; i<size; i++)
{
    count =0;
    for(j=0;j<size;j++)
    {
        if(array[i]==array[j])
        {
            count++;
        }
    }
    if(count>max)
    {
        max = count;
        mode= array[i];
    }
    else{
        mode=0;
    }
}
printf("%d\n", mode);
return 0;
}