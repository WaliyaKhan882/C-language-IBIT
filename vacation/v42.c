// reverse transpose of matrix
#include <stdio.h>
void rev_trans(int a1[100][100], int a2[100][100], int size)
{
    int i, j;
    printf("Enter the size of matrix\n");
    scanf("%d", &size);
    printf("Enter the elements of matrix\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &a1[i][j]);
        }
    }
    printf("the matrix is matrix is\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", a1[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix is\n");
    for (i = 0; i <size; i++)
    {
        for (j = size -1 ; j>=0 ; j--)
        {
            a2[i][j] = a1[j][i];
            printf("%d ", a2[i][j]);
        }
         printf("\n");
    }

}
int main()
{
    int arr1[100][100], arr2[100][100], size;
    rev_trans(arr1, arr2, size);
    return 0;
}