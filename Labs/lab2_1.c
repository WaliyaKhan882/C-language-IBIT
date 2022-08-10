#include<stdio.h>
#include<string.h>
int main() {
//variable delaration
char a[150];
char b[200];
int string1, string2;
//user interaction for string a
printf("hey user type the string a, \n");
//take user input
scanf("%s", &a);
//user interaction for string b
printf("hey user, type the string b, \n");
//take user input
scanf("%s", &b);
//for finding the length of string = number of characters in string
string1 = strlen(a);
printf("\n %s, %d", a, string1);
string2 = strlen(b);
printf ("\n %s, %d", b, string2);
//now comparing a and b 
int c, d, e;
c = strcmp(a, a);
d = strcmp(a, b);
e = strcmp(a, "jerry");
printf("\n comparing result = %d %d %d", c, d, e);
return 0;
}
