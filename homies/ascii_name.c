//Printing the ascii value of a name taken from user
#include<stdio.h>
void print_asci(char name[])
{
    int size;
    scanf("%d", &size);
    printf("enter the name: \n");
    for(char i=0;i<size;i++)
    {
    scanf("%s", &name[i]);
    }
    printf("the asci value of name is: \n");
    for(char i=0; i<size; i++)
    {
       printf(" %d", name[i]);
    }
}
int main() {
    char n[100];
    print_asci(n);
    return 0;
}
    