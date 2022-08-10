//Finding Mean, Median and Mode of the given Array
#include<stdio.h>
int main() 
{
//TAKING THE ARRAY INPUT FROM USER
int i, size=6, array[size];
printf("Enter the array Numbers: \n");
for(i=0;i<6;i++)
{
    scanf("%d", &array[i]);
}
printf("the array is: \n");
for(i=0;i<6;i++)
{
    printf("%d ", array[i]);
}
//FOR CALCULATING MEAN OF THE ARRAY
float sum = 0;
for(i=0;i<6;i++)
{
    sum=sum+array[i];
}
float mean;
mean= sum/size;
printf("\n");
printf("Mean value is : %.2f \n", mean);
//FOR CALCULATING MEDIAN OF THE ARRAY
float median=0, mid_term=0;
int j, temp;
for(int i=0; i<6; i++) //firstly sorting the array
{
   for(int j=i+1; j<=5 ; j++ )
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
if(size%2 == 0) //finding mid term for even numbers
{
   temp=(size/2)-1;
   for(int i=0; i<6; i++)
   {
    if((temp==i) || (temp+1)==i)
    {
        mid_term=mid_term+array[i];
    }
   }
  median= mid_term/2; //median
  printf("Median of array is: %.2f \n", median);
}
else //finding midterm for odd numbers
{
    int temp= size/2;
    for(int i=0; i<6; i++)
    {
        if(temp==i)
        {
            mid_term=array[i];
        }
    }
  median=mid_term/2;
  printf("\n Median of array is: %.2f \n", median);
}
//FOR CALCULATING THE MODE OF THE ARRAY
int mode = 0, max=0, count=0;
for(int i=0; i<6; i++)
{
    count = 0;
    for(int j=i+1; j<6; j++)
    {
        if(array[i]==array[j])
         {
            count++;
         }
    }
    if(count>max)
    {
        max= count;
        mode=array[i];
    }
}
printf("Mode is : %d",mode);
return 0;
}

