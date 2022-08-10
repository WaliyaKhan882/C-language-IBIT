//sum of first 10 natural numbers
#include<stdio.h>
int main(){
    int i;
    printf("first 10 numbers:\n");
    for(int i=1;i<=10; i++)
    {
        printf("%d\n", i);
    }
    int sum = 0;
    printf("the sum is: \n");
    for(int i=1;i<=10; i++)
    {
       sum= sum + i;
    }
printf("%d\n", sum);
return 0;
}