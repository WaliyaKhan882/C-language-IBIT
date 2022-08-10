#include<stdio.h> //Printing the sum of pattern 1, 1/2, 1/3, 1/4, 1/5....
int main() {
    int i, n;
    float h;
    float sum=0;
    printf("enter number of terms\n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("%f ", 1/h);
        h=h+1;
        sum= sum + (1/h);
    }
    printf("\n%f", sum);
    return 0;
}