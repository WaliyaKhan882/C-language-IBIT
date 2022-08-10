//printinh hello with name
#include<stdio.h>

int main() {
	
	char c[30];
	// getting user name
  printf("enter your name : ");
  scanf("%s", &c);
  
    // paying greetings to the user
  printf("Hello, %s", c);
  
  return 0;
}
