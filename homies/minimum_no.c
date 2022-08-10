//Finding the smallest number of the array using Function
#include<stdio.h>
void smallest(int arr[])
{
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i] > arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%d", arr[0]);
}
int main() {
    int s[]={6,3,2,9,1};
    smallest(s);
    return 0;
}