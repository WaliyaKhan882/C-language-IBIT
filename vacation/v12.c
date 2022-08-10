#include<stdio.h> //Swapping the numbers
void swap(int n1, int n2)
{
    int temp;
    scanf("%d %d", &n1,&n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("n1 is %d\n", n1);
    printf("n2 is %d\n", n2);
}
int main() {
    int x;
    int y;
    swap(x,y);
    return 0;
}