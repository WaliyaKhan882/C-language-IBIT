//determinant of 2x2 Matrix
#include<stdio.h>
int main(){
int i,j,a[100][100],det;
printf("Enter the matrix elements\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d", &a[i][j]);
    }
}
printf("The determinant is\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        det = ((a[0][0]*a[1][1])-(a[0][1]*a[1][0]));
    }
}
printf("%d", det);
return 0;
}

