//Sum and Multiply Functions
#include<stdio.h>
int sum (int left , int right)
{
int result;
result= left + right;
return result;
}
int mul (int left , int right)
{
int answer;
answer= left * right;
return answer;
}
int main(){
    int a,b;
    a=5;
    b=8;
  int result;
  int answer;  
 result=sum(a,b);
 answer=mul(a,b);
 printf("%d\n", result);
 printf("%d\n", answer);
{
  int c,d;
  c=7;
  d=8;
  int result;
  int answer;
  result=sum(c,d);
  answer=mul(c,d);
 printf("%d\n", result);
 printf("%d\n", answer);
}
return 0;
}

