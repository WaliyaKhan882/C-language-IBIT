#include<stdio.h>//HCF of two numbers
 int hcf_finder(int n, int b)
 {
    int hcf=1,var=2;
    printf("enter first number\n");
    scanf("%d",&n);
    printf("enter second  number\n");
    scanf("%d",&b);
    
    
    for (int i=1; i<n || i< b; i++){
        
        if(n%var==0 && b%var==0){
            hcf=hcf*var;
            b=b/var;
            n=n/var;
            
        }
        else{
            var++;
        }
    }
    printf("HCF is %d",hcf);
   return 0;
}
int main() {
    int a,b,hcf;
    hcf_finder(a,b);
    return 0;
}