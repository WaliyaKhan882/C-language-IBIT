//hours into seconds
#include<stdio.h>

int main() {
	
	int a;   
 // a = number of hours
  printf("enter the numbers of hours = ");
  scanf("%d", &a);
  
    int b;  
 // b = number of seconds  
  printf("the value in seconds is = ");
 //1 hour = 3600 seconds
  printf("b = %d", a*3600);   
           
  return 0;
}
