#include<stdio.h>
//finding the number of duplicates in the array
int main() {
    int i,j,a[100],n,count=0,dup=0,answer,b[100];
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        b[i]=-1; 
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                b[j]=0; //i+1=-1+1=0=b[j]
            }
        }
        if(count>=2 && b[i]!=0)
        {
            dup=dup+1;
            answer=dup;
        }
    }
    printf("Number of duplicates elements is %d\n", answer);
    return 0;
}