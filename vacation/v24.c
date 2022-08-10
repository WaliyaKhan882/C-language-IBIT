#include<stdio.h>
//reversing the array
int main() {
    int i,j,n,a[100],b[100],c[100];
    printf("Enter the length of array\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements in order\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n", a[i]);
    }
    printf("The elements in reverse order\n");
    for(i=n-1; i>=0 ; i--)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}