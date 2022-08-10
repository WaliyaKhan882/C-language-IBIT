#include<stdio.h> //Printing the table of a number taken from user
int main() {
    int mul,result;
    printf("enter the number to get the table\n");
    scanf("%d",&mul);
    for(int i=1; i<=10; i++)
    {
        result=mul*i;
        printf("%d\n",result);
    }
    return 0;
}