//Use ternary statement, Print Valid if class strength is less than 40
#include<stdio.h>
int main() {
    //variable declaration
    int strength;
    //user interaction
    printf("Enter the strength of class: \n");
    //user input
    scanf("%d", &strength);
    //using ternary operator 
    (strength>40)? printf("valid") : printf("invalid");
    return 0;
}