#include<stdio.h>
//cut the sorted array at a specific index
int main() {
    int i, j,arr1[100],n,temp,inum;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the index number\n");
    scanf("%d", &inum);
    for(i=inum;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr1[i]>arr1[j])
            {
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    printf("the sorted array is\n");
    for(i=inum;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
   for(i=0;i<inum;i++)
    {
        printf("%d ",arr1[i]);
    }
return 0;
}