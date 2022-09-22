#include<stdio.h>
#include<math.h>
/*taking wall height from user, individual height also from user to find the number of doses the individual needs 
to reach 1ft heigh from the height of wall*/
int main() {
float wheight, uheight;
int h1,h2,med,doses;
printf("Enter the wall height\n");
scanf("%f", &wheight);
printf("Enter the individual height\n");
scanf("%f", &uheight);
h1= round(wheight);
h2= round(uheight);
med=h1-h2;
doses=med+1;
printf("required doses are %d\n", doses);
}