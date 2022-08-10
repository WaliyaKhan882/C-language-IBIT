#include<stdio.h>
//Finding Sum of left diagnols
//for sum of right diagnols you can simply add the a[i][j] where i==j
int main() {
 int i,j,n,a[100][100],sum=0;
    printf("enter the size of matrix\n");
    scanf("%d", &n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the sum is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
            sum=sum+a[i][j];
            }
        }
    }
    printf("%d", sum);
return 0;
}