// sorting twist variations
/*9  6  3
  8  5  2
  7  4  1*/
#include <stdio.h>
void sorting_twist(int arr1[100][100], int size)
{
    int i, j, temp = 0, m, k, c;
    printf("enter the size of matrix\n");
    scanf("%d", &size);
    printf("enter the elements of 1st matrix\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            c = j + 1;
            for (k = i; k < size; k++)
            {
                for (m = c; m < size; m++)
                {
                    if ((arr1[i][j] < arr1[k][m]))
                    {
                        temp = arr1[k][m];
                        arr1[k][m] = arr1[i][j];
                        arr1[i][j] = temp;
                    }
                }
                c = 0;
            }
        }
    }
    printf("the sorted twist matrix(descending column wise) is\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", arr1[j][i]);
        }
        printf("\n");
    }
    printf("descending row wise is\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("ascending row wise\n");
    for (i = size - 1; i >= 0; i--)
    {
        for (j = size - 1; j >= 0; j--)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("ascending column wise\n");
    for (i = size - 1; i >= 0; i--)
    {
        for (j = size - 1; j >= 0; j--)
        {
            printf("%d ", arr1[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int a1[100][100], n;
    sorting_twist(a1, n);
    return 0;
}