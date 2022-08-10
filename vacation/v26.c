#include<stdio.h>
//merge two arrays and sort the final array
int main() {
    int i,j,k,a[100],b[100],c[100],n1,n2,n3;
    printf("Enter the size of array 1\n");
    scanf("%d", &n1);
    printf("Enter the elements of arry1\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the size of array 1\n");
    scanf("%d", &n2);
    printf("Enter the elements of arry2\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d", &b[i]);
    }
    n3=n1+n2;
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<n2;j++)
    {
        c[i]=b[j];
        i++;
    }
    for(i=0;i<n3;i++)
    {
        for(j=i+1;j<n3;j++)
        {
            if(c[i]<c[j])
            {
                k=c[i];
                c[i]=c[j];
                c[j]=k;
            }
        }
    }
    printf("merged array in descending order\n");
    for(i=0;i<n3;i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}