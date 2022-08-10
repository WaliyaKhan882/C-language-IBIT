//if else simple conditions
#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter the numbers:");
    scanf("%d %d", &a, &b);
    float x;
    
    if ((b==0)&&(a!=0))
    {
        printf("division by zero \n");  
    }
    else
    {
        x=a/b;
        printf("%f",x);
    }
    
    return 0;
}