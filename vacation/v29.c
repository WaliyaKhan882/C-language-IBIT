//to insert a number in the sorted array
#include<stdio.h>
int main() {
    int i,j,a[100],n,temp,num;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The sorted array is\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d ",a[i]);
    }
printf("\nEnter the number to be placed in sorted array\n");
scanf("%d", &num);
for(i=0;i<n+1;i++)
{
    if(num<a[i])
    {
        temp=a[i];
        a[i]=num;
        num=temp;
    }
}
printf("the final sorted array is\n");
for(i=0;i<n+1;i++)
{
    printf("%d ", a[i]);
}
return 0;
}