// upper triangular matrix
#include <stdio.h>
void upper_matrix(int arr[100][100], int size)
{
    int i, j;
    printf("enter the size of the matrix\n");
    scanf("%d", &size);
    printf("enter the elements of the matrix\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the upper triangular matrix will be\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if(i>j) //i<j for lower triangular matrix
            {
                arr[i][j]=0;
                printf("%d ",arr[i][j]);
            }
            else{
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
}
int main() {
    int a[100][100],n;
    upper_matrix(a,n);
    return 0;
}