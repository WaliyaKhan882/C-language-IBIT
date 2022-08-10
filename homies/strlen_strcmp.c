//String length and String Compare
#include<stdio.h>
#include<string.h>
int main() {
    char x[100];
    char y[200];
    printf("enter the strings: ");
    scanf("%s %s",&x, &y);
    int a;
    int b;
    a= strlen(x);
    b=strlen(y);
    printf("the lenth of string x and y is %d and %d", a, b);
    int i;
    i=strcmp(x,y);
    printf("results= %d" , i);
    return 0;
}