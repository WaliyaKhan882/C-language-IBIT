#include<stdio.h>
//dot matrix(matrix multiplication)
void dot_matrix(int arr1[100][100],int arr2[100][100],int arr3[100][100],int size)
{
    int i,j;
    printf("enter the size of matrix\n");
    scanf("%d", &size);
    printf("enter the elements of 1st matrix\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("enter the elements of 2nd matrix\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("the result matrix is\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            for(int k=0;k<size;k++)
            {
            arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int a1[100][100],a2[100][100],a3[100][100],n;
    dot_matrix(a1,a2,a3,n);
    return 0;
}