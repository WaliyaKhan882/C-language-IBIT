#include<stdio.h> //LCM OF TWO NUMBERS
int lcm_finder(int num1, int num2)
{
    int lcm=1, divisor=2;
    printf("Enter the numbers\n");
    scanf("%d %d", &num1,&num2);
    for(int i=1 ; num1!=1|| num2!=1 ; i++)
    {
        if(num1%divisor==0 && num2%divisor==0)
        {
            lcm=lcm*divisor;
            num1=num1/divisor;
            num2=num2/divisor;
        }
        else if(num1%divisor==0)
        {
            lcm=lcm*divisor;
            num1=num1/divisor;
        }
        else if(num2%divisor==0)
        {
            lcm=lcm*divisor;
            num2=num2/divisor;
        }
        else
        {
            divisor++;
        }
    }
    printf("\n LCM is %d\n", lcm);
}
int main() {
    int a,b,lcm;
    lcm_finder(a,b);
    return 0;
}