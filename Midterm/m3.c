#include<stdio.h>
void stat_calc(int array[],int size) //function for mean,median,mode
{
//FOR CALCULATING MEAN OF THE ARRAY
float sum = 0;
for(int i=0;i<size;i++)
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
for(int i=0; i<size; i++) //firstly sorting the array
{
   for(int j=i+1; j<size ; j++ )
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
   for(int i=0; i<size; i++)
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
    for(int i=0; i<size; i++)
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
for(int i=0; i<size; i++)
{
    count = 0;
    for(int j=i+1; j<size; j++)
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
}
int main() {
    int i,n; //variable declaration
    int array[100];
    //user interaction
    printf("Enter the size of array\n");
    //taking input from user
    scanf("%d", &n);
    //user interaction
    printf("Enter the array elements\n");
    //taking input from user
    for(i=0;i<n;i++)
    {
      scanf("%d", &array[i]);
    }
    //calling the function
    stat_calc(array,n);
    return 0;
}