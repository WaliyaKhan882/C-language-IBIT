//find the most repeated number in the array
#include<stdio.h>
int main() {
    int i,j,n,arr[100],count=0,max=0,rep;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The most repeated number of the array is\n");
    for ( i = 0; i < n; i++)
    {
        count=0;
        for ( j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            rep=arr[i];
        }
    }
    printf("%d\n", rep);
    return 0;
}