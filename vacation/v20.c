#include<stdio.h>
//printing 2D array
int main() {
    int arry[3][3],row,column;
    printf("Enter matrix elements\n");
    for(row=0;row<3;row++)
    {
        for(column=0;column<3;column++)
        {
            scanf("%d", &arry[row][column]);
        }
    }
    printf("\nThe matrix is\n");
    for(row=0;row<3;row++)
    {
        for(column=0;column<3;column++)
        {
            printf("%d ", arry[row][column]);
        }
        printf("\n");
    }
    return 0;
}