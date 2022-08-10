//Reversing the string
#include<stdio.h>
#include<string.h>
int main() {
    int length;
    char s[length];
    length=strlen(s);
    scanf("%s",&s);
    for(int i=length; i>=0; i--)
    {
       printf("%c", s[i]);
    }
    return 0;
}