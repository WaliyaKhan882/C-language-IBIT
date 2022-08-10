//Printing Ascii characters less than 127, 16 characters in one line 
#include<stdio.h>
int main(){
int i = 0;
for(int i = 0; i<127; i++)
{
    printf(" %c", i);
    if(i%16==0)
    {
        printf("\n");
    }
}
return 0;
}