#include<stdio.h>
int unit_converter(int source , int destination) //making function for converting time units
{
    //variable declaration
    float days,hours,minutes,seconds,milliseconds,answer;
    //user interaction
    //Asking the source unit
    printf("Enter the source unit\n");
    printf("Enter 1 for Days, 2 for Hours, 3 for Minutes, 4 for Seconds, 5 for Milliseconds\n");
    //taking user input
    scanf("%d", &source);
    if(source==1)//when source is days
    {
      //Asking user for destination unit
      printf("Enter the destination unit\n");
      printf("Enter 1 for Days, 2 for Hours, 3 for Minutes, 4 for Seconds, 5 for Milliseconds\n");
      //taking user input
      scanf("%d", &destination);
      printf("Enter the number of days\n");
      //taking input of days
      scanf("%f", &days);
      if(destination==2)//days to hours
      {
        hours=days*24.00;
        printf("%.2f\n", hours);
      }
      else if(destination==3)//days to minutes
      {
        minutes=days*24*60;
        printf("%.2f\n", minutes);
      }
      else if(destination==4)//days to seconds
      {
        seconds=days*24*60*60;
        printf("%.2f\n", seconds);
      }
      else if(destination==5)//days to milliseconds
      {
        milliseconds=days*24*60*60*1000;
        printf("%.2f\n", milliseconds);
      }
      else { //wrong destination
        printf("Invalid destination\n");
      }
    }
    else if(source==2)//when source is hours
    {
        //Asking user for destination unit
      printf("Enter the destination unit\n");
      printf("Enter 1 for Days, 2 for Hours, 3 for Minutes, 4 for Seconds, 5 for Milliseconds\n");
      //taking user input
      scanf("%d", &destination);
      printf("Enter the number of hours\n");
      //taking input of hours
      scanf("%f", &hours);
      if(destination==1)//hours to days
      {
        days=hours/24.00;
        printf("%.2f\n", days);
      }
      else if(destination==3)//hours to minutes
      {
        minutes=hours*60;
        printf("%.2f\n", minutes);
      }
      else if(destination==4)//hours to seconds
      {
        seconds=hours*60*60;
        printf("%.2f\n", seconds);
      }
      else if(destination==5)//hours to milliseconds
      {
        milliseconds=hours*60*60*1000;
        printf("%.2f\n", milliseconds);
      }
      else { //wrong destination
        printf("Invalid destination\n");
      }
    }
    else if(source==3)//when source is minutes
    {
        //Asking user for destination unit
      printf("Enter the destination unit\n");
      printf("Enter 1 for Days, 2 for Hours, 3 for Minutes, 4 for Seconds, 5 for Milliseconds\n");
      //taking user input
      scanf("%d", &destination);
      printf("Enter the number of minutes\n");
      //taking input of minutes
      scanf("%f", &minutes);
      if(destination==1)//minutes to days
      {
        days=minutes/1440.00;
        printf("%.2f\n", days);
      }
      else if(destination==2)//minutes to hours
      {
        hours=minutes/60.00;
        printf("%.2f\n", hours);
      }
      else if(destination==4)//minutes to seconds
      {
        seconds=minutes*60;
        printf("%.2f\n", seconds);
      }
      else if(destination==5)//minutes to milliseconds
      {
        milliseconds=minutes*60*1000;
        printf("%.2f\n", milliseconds);
      }
      else { //wrong destination
        printf("Invalid destination\n");
      }
    }
    else if(source==4)//when source is seconds
    {
        //Asking user for destination unit
      printf("Enter the destination unit\n");
      printf("Enter 1 for Days, 2 for Hours, 3 for Minutes, 4 for Seconds, 5 for Milliseconds\n");
      //taking user input
      scanf("%d", &destination);
      printf("Enter the number of seconds\n");
      //taking input of seconds
      scanf("%f", &seconds);
      if(destination==1)//seconds to days
      {
        days=seconds/86400.00;
        printf("%.2f\n", days);
      }
      else if(destination==2)//seconds to hours
      {
        hours=seconds/3600.00;
        printf("%.2f\n", hours);
      }
      else if(destination==3)//seconds to minutes
      {
        minutes=seconds/60.00;
        printf("%.2f\n", minutes);
      }
      else if(destination==5)//seconds to milliseconds
      {
        milliseconds=seconds*1000;
        printf("%.2f\n", milliseconds);
      }
      else { //wrong destination
        printf("Invalid destination\n");
      }
    }
    else if(source==5)//when source is milliseconds
    {
        //Asking user for destination unit
      printf("Enter the destination unit\n");
      printf("Enter 1 for Days, 2 for Hours, 3 for Minutes, 4 for Seconds, 5 for Milliseconds\n");
      //taking user input
      scanf("%d", &destination);
      printf("Enter the number of milliseconds\n");
      //taking input of milliseconds
      scanf("%f", &milliseconds);
      if(destination==1)//milliseconds to days
      {
        days=milliseconds/86400000.00;
        printf("%.2f\n", days);
      }
      else if(destination==2)//milliseconds to hours
      {
        hours=milliseconds/3600000.00;
        printf("%.2f\n", hours);
      }
      else if(destination==3)//milliseconds to minutes
      {
        minutes=milliseconds/60000.00;
        printf("%.2f\n", minutes);
      }
      else if(destination==4)//milliseconds to seconds
      {
        seconds=milliseconds/1000.00;
        printf("%.2f\n", milliseconds);
      }
      else { //wrong destination
        printf("Invalid destination\n");
      }
    }
}
int main()
{
    int source, destination;
    unit_converter(source,destination);
    return 0;
}