// printing right and left diagonals using 1D array
#include <stdio.h>
void diagonal_printer(int arr[100], int size)
{
    int i=0,j=0;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    for (i = 0; i <size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if((i==j) || (i+j==size-1))
            {
            printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int a[100], n;
    diagonal_printer(a, n);
    return 0;
}