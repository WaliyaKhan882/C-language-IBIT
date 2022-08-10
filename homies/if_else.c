//Function for finding seconds in a given number of hours and minutes
#include<stdio.h>
int seconds(int hours, int minutes)
{
    printf("enter the hours and minutes\n");
    scanf("%d %d", &hours, &minutes);
    int result;
    result=(hours*3600)+(minutes*60);
    return result;
}
int main() {
    int h, m, result;
    result=seconds(h,m);
    printf("%d\n", result);
 return 0;
}