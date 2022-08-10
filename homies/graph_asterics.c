/*Write a program that asks the user to enter today’s sales for five stores. The program should then
display a bar graph comparing each store’s sales. Create each bar in the bar graph by displaying a row of asterisks. Each asterisk should represent $100 of sales.

Here is an example of the program’s output.
Enter today's sales for store 1:	1000
Enter today's sales for store 2:	1200
Enter today's sales for store 3:	1500
Enter today's sales for store 4:	400
Enter today's sales for store 5:	1900
SALES BAR CHART	
(Each * = $100)	
Store 1: *****/
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the sale of five stores: \n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    float v,w,x,y,z;
    v=a/100;
    w=b/100;
    x=c/100;
    y=d/100;
    z=e/100;
    int symbol;
    for(symbol=0;symbol<v;symbol++)
    {
        printf("*", symbol);
    }
    printf("\n");
    for(symbol=0;symbol<w;symbol++)
    {
        printf("*", symbol);
    }
    printf("\n");
    for(symbol=0;symbol<x;symbol++)
    {
        printf("*", symbol);
    }
    printf("\n");
    for(symbol=0;symbol<y;symbol++)
    {
        printf("*", symbol);
    }
    printf("\n");
    for(symbol=0;symbol<z;symbol++)
    {
        printf("*", symbol);
    }
    printf("\n");
    return 0;
}