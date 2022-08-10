#include<stdio.h>
int single_finder(int arry[], int n) //making the function for finding count of non-repeating elements in array
{
  //variable declaration
    int i,j,count=0, single_count=0;
    //first loop
    for(i=0 ; i<n ; i++)
    {
      count=0; //making count again equal to zero after loop iteration
      //second loop
      for(j=0;j<n;j++)
      {
        if(arry[i]==arry[j]) //checking how many times a number is present in the array
        {
          count++;
        }
      }
     if(count==1) //condition to count only non-repeating elements
      {
        single_count=single_count+count;
      }
    }
return single_count; //return value
}
int main() {
    int i,answer,n; //variable declaration
    int arry[100];
    //user interaction
    printf("Enter the size of array\n");
    //taking input from user
    scanf("%d", &n);
    //user interaction
    printf("Enter the array elements\n");
    //taking input from user
    for(i=0;i<n;i++)
    {
      scanf("%d", &arry[i]);
    }
    //calling the function
    answer=single_finder(arry,n);
    //printing the output
    printf("count of non-repeating elements is %d\n", answer);
    return 0;
}
