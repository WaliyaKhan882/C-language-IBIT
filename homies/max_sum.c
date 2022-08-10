//Sum of two largest numbers in the array 
#include<stdio.h>
int max_sum(int arry[])
{
    int max1;
    int max2;
    if(arry[0]> arry[1])
    {
        max1=arry[0];
        max2=arry[1];
    }
    else
    {
        max1=arry[1];
        max2=arry[0];
    }
    for(int i=2; i<5; i++)
    {
      if(arry[i]>max1)
      {
        max2=max1;
        max1=arry[i];
      }
      else if((arry[i]<max1)&&(arry[i]>max2))
      {
        max2=arry[i];
      } 
    }
    printf(" %d %d\n",max1, max2);
    int result;
    result=max1+max2;
    return result;
}
int main() {
    int s[]={43,24,76,32,11};
    int answer;
    answer=max_sum(s);
    printf("max_sum is : %d", answer);
    return 0;
}