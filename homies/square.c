#include<stdio.h>
void square(int arry[], int total_rows)
{
    scanf("%d", &total_rows);
    int row, symbol;
    for(row=1; row<=total_rows; row++)
    {
        for(symbol=1; symbol<=total_rows; symbol++)
        printf(" *");
        printf("\n");
    }
}
int main() {
    int s[100],n;
    square(s,n);
    return 0;
}