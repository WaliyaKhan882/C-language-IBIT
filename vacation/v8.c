#include<stdio.h> //sum of odd numbers
int main() {
    int i, sum=0,n;
    printf("enter the number of terms\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
            sum=sum +i;
        }
    }
    printf("%d\n", sum);
    return 0;
}