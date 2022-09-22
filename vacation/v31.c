#include<stdio.h>
//printing right diagnol
int main() {
    int i,j,n, arry[100][100];
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}