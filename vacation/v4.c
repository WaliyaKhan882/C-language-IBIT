#include<stdio.h> //Printing all tables upto where user has asked
int main() {
    int table_number,i,j;
    printf("enter the number upto where you want the tables\n");
    scanf("%d",&table_number);
    for(i=1; i<=table_number; i++)
    {
        for(j=1; j<=10; j++)
        {
           printf("%dx%d=%d , ",i,j,i*j);
        }
      printf("\n");
    }
    return 0;
}