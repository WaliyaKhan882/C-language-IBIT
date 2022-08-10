#include<stdio.h>
//Addition of 2D array
int main() {
    printf("Enter the size of matrix(less than 5\n");
    int i,j,arry1[50][50],arry3[50][50],arry2[50][50],n;
    scanf("%d", &n);
    printf("Enter 1st matrix elements\n");
    for(i=0 ; i<n ; i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &arry1[i][j]);
        }
    }
    printf("Enter 2nd matrix elements\n");
    for(i=0 ; i<n ; i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &arry2[i][j]);
        }
    }
    printf("\nThe addition of 2 matrices is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arry3[i][j]= arry1[i][j]+arry2[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", arry3[i][j]);
        }
        printf("\n");
    }
    return 0;
}