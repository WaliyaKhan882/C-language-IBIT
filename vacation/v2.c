#include<stdio.h>//Finding sum of first 10 numbers and finding the average
int main() {
    int sum=0;
    for(int i=0; i<10; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
    float average;
    average=sum/10.00;
    printf("%.2f\n", average);
    return 0;
}