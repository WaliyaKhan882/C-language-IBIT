#include<stdio.h>
//transpose of matrix
int main() {
    int i,j,n,a[100][100];
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
    printf("The transpose of matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}