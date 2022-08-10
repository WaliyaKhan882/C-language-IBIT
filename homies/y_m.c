//Yards into meters
#include<stdio.h>
int main(){
    float yards;
    float meters;
    printf("enter the no of yards: ");
    scanf("%f", &yards);
    meters= yards* 0.91;
    printf("yards into meters: %f", meters);
    return 0;
}