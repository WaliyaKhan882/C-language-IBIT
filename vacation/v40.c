// cutting the array at prime number and printing the same prime number backward in the array until the program
// finds another prime number
#include <stdio.h>
void arr_cut_prime(int a[100], int n)
{
    int i, j, k, c = 0, prime[100], t = 0;
    printf("\nEnter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe array will be like\n");
    for (i = 0; i < n; i++)
    {
        c = 0;
        if (a[i] == 1 || a[i] == 0)
        {
            c = 1;
        }
        else
        {
            for (j = 2; j < a[i]; j++)
            {
                if (a[i] % j == 0)
                {
                    c = 1;
                    break;
                }
            }
        }
        if (c == 0)
        {
            prime[i] = a[i];
            for (j = t; j <= i; j++)
            {
                prime[j] = prime[i];
                printf(" %d ", prime[j]);
            }
            t = i + 1;
        }
    }
}
int main()
{
    int arr[100], n;
    arr_cut_prime(arr, n);
    return 0;
}