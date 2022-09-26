#include <stdio.h>
// DOT MATRIX VARIATIONS
// dot matrix(matrix multiplication) 1st row with first column
void dot_matrix1(int arr1[3][3], int arr2[3][3], int arr3[3][3], int size)
{
    int i, j, sum = 0;
    printf("the result matrix1 is\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum = 0;
            for (int k = 0; k < size; k++)
            {
                sum = sum + arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
// dot matrix(matrix multiplication) 1st column with first row
void dot_matrix2(int arr1[3][3], int arr2[3][3], int arr3[3][3], int size)
{
    int i, j, sum = 0;
    printf("the result matrix2 is\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum = 0;
            for (int k = 0; k < size; k++)
            {
                sum = sum + arr1[k][j] * arr2[i][k];
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
// dot matrix(matrix multiplication) 1st row with last column
void dot_matrix3(int arr1[3][3], int arr2[3][3], int arr3[3][3], int size)
{
    int i, j, sum = 0;
    printf("the result matrix3 is\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum = 0;
            for (int k = 0; k < size; k++)
            {
                sum = sum + arr1[i][k] * arr2[k][size - 1 - j];
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
// dot matrix(matrix multiplication)  last column with 1st row
void dot_matrix4(int arr1[3][3], int arr2[3][3], int arr3[3][3], int size)
{
    int i, j, sum = 0;
    printf("the result matrix4 is\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum = 0;
            for (int k = 0; k < size; k++)
            {
                sum = sum + arr1[k][size - 1 - j] * arr2[i][k];
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
// dot matrix(matrix multiplication)  last row last column
void dot_matrix5(int arr1[3][3], int arr2[3][3], int arr3[3][3], int size)
{
    int i, j, sum = 0;
    printf("the result matrix5 is\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum = 0;
            for (int k = 0; k < size; k++)
            {
                sum = sum + arr1[size - 1 - i][k] * arr2[k][size - 1 - j];
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
// dot matrix(matrix multiplication)  last row first column
void dot_matrix6(int arr1[3][3], int arr2[3][3], int arr3[3][3], int size)
{
    int i, j, sum = 0;
    printf("the result matrix6 is\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum = 0;
            for (int k = 0; k < size; k++)
            {
                sum = sum + arr1[size-1-i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
// dot matrix(matrix multiplication)  last column last row
void dot_matrix7(int arr1[3][3], int arr2[3][3], int arr3[3][3], int size)
{
    int i, j, sum = 0;
    printf("the result matrix 7 is\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum = 0;
            for (int k = 0; k < size; k++)
            {
                sum = sum + arr1[k][size-1-j] * arr2[size-1-i][k];
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
// dot matrix if odd (subtract) if even (add)
void dot_even_odd_matrix(int arr1[3][3], int arr2[3][3], int arr3[3][3], int size)
{
    int i, j, sum = 0;
    printf("the result matrix8 is\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum = 0;
            for (int k = 0; k < size; k++)
            {
                if (i % 2 == 0 && j % 2 == 0) // if row is even and column is also even
                {
                    sum = sum + arr1[i][k] * arr2[k][j];
                }
                else
                {
                    sum = sum - arr1[i][k] * arr2[k][j];
                }
                arr3[i][j] = sum;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
// now calling all functions in main
int main()
{
    int size = 3, i, j, arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, arr2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}}, arr3[3][3];
    // printf("enter the size of matrix\n");
    // scanf("%d", &size);
    // printf("enter the elements of 1st matrix\n");
    // for (i = 0; i < size; i++)
    // {
    //     for (j = 0; j < size; j++)
    //     {
    //         scanf("%d", &arr1[i][j]);
    //     }
    // }
    // printf("enter the elements of 2nd matrix\n");
    // for (i = 0; i < size; i++)
    // {
    //     for (j = 0; j < size; j++)
    //     {
    //         scanf("%d", &arr2[i][j]);
    //     }
    // }
    dot_matrix1(arr1, arr2, arr3, size);
    dot_matrix2(arr1, arr2, arr3, size);
    dot_matrix3(arr1, arr2, arr3, size);
    dot_matrix4(arr1, arr2, arr3, size);
    dot_matrix5(arr1, arr2, arr3, size);
    dot_matrix6(arr1, arr2, arr3, size);
    dot_matrix7(arr1, arr2, arr3, size);
    dot_even_odd_matrix(arr1, arr2, arr3, size);
    return 0;
}