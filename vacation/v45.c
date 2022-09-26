#include <stdio.h> //telling the number in array having given frequency
int main()
{
    int i, j, a[100], b[100], size, frequency, number, c = 0;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    printf("Enter array elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
        b[i] = -1;
    }
    for (i = 0; i < size; i++)
    {
        frequency = 1;
        for (j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                frequency++;
                b[j] = 0;
            }
        }
        if (b[i] != 0)
        {
            b[i] = frequency;
        }
    }
    printf("enter the frequency number\n");
    scanf("%d", &number);
    for (i = 0; i < size; i++)
    {
        if (b[i] == number)
        {
            printf("number is %d\n", a[i]);
            c = 1;
        }
    }
    if (c == 0)
    {
        printf("no number with given frequency is found\n");
    }
    return 0;
}
