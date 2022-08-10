/*floyd's triangle
1
01
101
0101*/
#include<stdio.h>
int main() {
    int total_rows, row, number, count1,count2;
    printf("Enter the total number of rows\n");
    scanf("%d", &total_rows);
    for(row=1; row<total_rows ;row++)
    {
        if(row%2==0)
        {
            count1=0;
            count2=1;
        }
        else{
            count1=1;
            count2=0;
        }
        for(number=0;number<row;number++)
        {
            if(number%2==0)
            {
                printf("%d", count1);
            }
            else
            {
                printf("%d",count2);
            }
        }
        printf("\n");
    }
    return 0;
}