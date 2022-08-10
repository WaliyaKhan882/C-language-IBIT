//fahrenheit to celcius
#include<stdio.h>
int main(){
    float f;
    float c;
    printf("enter temp in fahrenheits: ");
    scanf("%f", &f);
    c=(f-32)*5/9;
    printf("%.2f f= %.2f c",f, c);
    return 0;
}