// either the matrix is identity matrix or not
#include <stdio.h>
void identity_matrix(int arr[100][100], int size)
{
    int i, j, flag = 0,c=0;
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
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if ((i == j && arr[i][j] == 1))
            {
                flag=1;
                break;
            }
            else if (i != j && arr[i][j] == 0)
            {
                c = 1;
                break;
            }
        }
    }
    if (flag == 1 && c==1)
    {
        printf("identity\n");
    }
    else
    {
        printf("not\n");
    }
}
int main()
{
    int a[100][100], n;
    identity_matrix(a, n);
    return 0;
}