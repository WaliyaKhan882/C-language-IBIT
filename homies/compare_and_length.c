//Function to compare and finding the lenth of strings
#include<stdio.h>
#include<string.h>
int string_length(char s[])
{
    int result;
    result=strlen(s);
    return result;
}
int string_compare(char s[], char x[])
{
    int answer;
    answer=strcmp(s,x);
    return answer;
}
int main()
{
    char a[]="waliya";
    int result;
    result=string_length(a);
    printf("result is %d\n",result);
    int answer;
    char b[]="Abeeha";
    answer= string_compare(a,b);
    printf("answer is %d\n", answer);
    return 0;
}