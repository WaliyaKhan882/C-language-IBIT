//printing a hollow square and print only diagnols in it
#include<stdio.h>
void hollow_diagnol_square(int arr[100][100],int n)
{
    int i,j;
    printf("Enter the number of total rows\n");
    scanf("%d", &n);
    for(i=0 ; i<n ; i++)
    {
        for (j=0 ; j<n ; j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1 || i==j || i+j==n-1)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int a[100][100],size;
    hollow_diagnol_square(a,size);
    return 0;
}