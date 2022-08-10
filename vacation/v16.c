#include<stdio.h> //FREQUENCY OF EACH ELEMENT IN THE ARRAY
int main() {
    int i,j,a[100],b[100], size, frequency;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    printf("Enter array elements\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]); 
        b[i]=-1; 
    }
    for(i=0;i<size;i++)
    {
        frequency=1;
        for(j=i+1;j<size;j++)
         {
            if(a[i]==a[j])
            {
                frequency++;
                b[j]=0; 
            }
         }
        if(b[i]!=0) 
        {
            b[i]=frequency;
        }
    }
    for(i=0;i<size;i++)
    {
        if(b[i]!=0)
        {
            printf("%d occurs %d times\n",a[i],b[i]);
        }
    }
    return 0;
}