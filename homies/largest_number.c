//Function to find the largest number of the array
#include<stdio.h>
void largest_number(int arry[])
{
    int size, largest,i;
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arry[i]);
    }
    for(int i=0; i<5; i++)
    {
        if(arry[0]< arry[i])
        {
        arry[0]=arry[i];
        }
    }
    printf("largest number is %d", arry[0]);
}
int main() {
    int l[100];
    largest_number(l);
    return 0;
}