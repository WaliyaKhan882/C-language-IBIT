//checking the given alphabet is vowel,consonant or a special character
#include<stdio.h>
int main() {
	//variable declaration
	char ch;
	//user interaction
	printf("hey user, enter any character, \n");
    //take user input
    scanf("%c", &ch);
    //output
    //Alphabet check
    if ((ch>='a') && (ch<='z'))
    { 
    printf("\n the character is alphabet : '%c'", ch );
	}
	else if ((ch>='0') && (ch<='9'))
	{
	printf("\n the character is digit : '%c'", ch );	
	}
	else 
	{
	printf("\n the character is special character : '%c'", ch );
	}
	return 0;
}
