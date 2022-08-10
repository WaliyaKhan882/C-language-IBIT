//Function to find number of cars if one bas can have only 5 passengers
#include<stdio.h>
#include <math.h>
int people(int passengers, float buses)
{
    printf("enter the number of passengers: \n");
    scanf("%d", &passengers);
    buses=passengers/5.0; //5 passengers per bus
    int total_buses;
    total_buses=ceil(buses);
    return total_buses;
}
int main()
{
    int p;
    float b;
    int result;
    result=people(p,b);
    printf("total buses required are :%d \n", result);
    return 0;
}
