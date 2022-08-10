#include<stdio.h> //Function to find the square of a number
#include<math.h>
int square(int a)
{
    int result;
    result=pow(a,2);
    return result;
}
int main() {
    int a=9;
    int answer;
    answer=square(a);
    printf("the %d\n", answer);
    return 0;
}