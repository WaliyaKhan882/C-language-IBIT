//Identifying the given character is an alphabet, digit or a special character
#include<stdio.h>
int main() {
//variable
char ch;
//user interaction
printf("hey user, please enter any character : \n");
//input
scanf("%c", &ch);
//switch statements
switch(ch)
{
    case 'a'...'z':
    case 'A'...'Z':
    printf("the character is an alphabet \n", ch);
    break;
    case '0'...'9':
    printf("the character is a digit \n"); 
    break;
    default:
    printf("the character is a special character \n"); 
    break;
}
return 0;
}   
