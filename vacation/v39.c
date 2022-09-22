// printing right tri and rev triangle diagonals using 1D array
#include <stdio.h>
void right_triangle(int arr[100], int size)
{
    int i=0,j=0;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    for (i = 1; i <=size; i++)
    {
        for (j = 1;j<=(2*i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void inverted_tri(int arr[100], int size)
{
   int i=0,j=0;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    for (i = size; i >=0; i--)
    {
        for (j = 0;j<(2*i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    } 
}
int main()
{
    int a[100], n;
    right_triangle(a, n);
    inverted_tri(a,n);
    return 0;
}