//Copying the string
#include<stdio.h>
#include<strings.h>
int main() {
    char source[200];
    printf("enter the string: \n");
    scanf("%s", &source);
    char target[150];
    strcpy(target,source);
    printf("x=%s", source);
    printf("y=%s",target);
    return 0;
}