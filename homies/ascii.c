#include<stdio.h> //Function to print the ascii value of character
void print_asci(char character)
{
    printf("enter the character\n");
    printf("the value in ascii is: %d \n", character);
}
int main() {
    char c='a';
    print_asci(c);
    return 0;
}