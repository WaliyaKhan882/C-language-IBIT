#include<stdio.h>
#include<string.h>
int main() {
    //variable declaration
    int question;
    //user interaction
    printf("Enter 1 to start the quiz: \n");
    //user input
    scanf("%d",&question);
    if(question==1)
    {
       //question 1
       printf("FFC stands for \n");
       //options
       printf("A. Foreign Finance Corporation B.Film Finance Corporation C.Federation of Football Council D.None of the above \n");
       //variable declaration
       char correct[20]="B";
       char option[20];
       int x;
       //user interaction
       printf("Enter the correct option \n");
       //user input
       scanf("%s", &option);
       //checking the answer
       x = strcmp(correct,option);
       if(x==0)
       {
           printf("correct answer \n");
           printf("Next Question \n");
           //question 2
           printf("Golf player Vijay Singh belongs to which country? \n");
           //options
           printf("A. USA B.Fiji C.India D.UK \n");
           char correct[20]="B";
           char option[20];
           int x;
           //user interaction
           printf("Enter the correct option \n");
           //user input
           scanf("%s", &option);
           //checking the answer
           x = strcmp(correct,option);
           if(x==0)
           {
               printf("correct answer \n");
               printf("Next Question \n");
               //question 3
               printf("First Afghan War took place in: \n");
               //options
               printf("A.1839 B.1843 C.1833 D.1848 \n");
               char correct[20]="A";
               char option[20];
               int x;
               //user interaction
               printf("Enter the correct option \n");
               //user input
               scanf("%s", &option);
               //checking the answer
               x = strcmp(correct,option);
               if(x==0)
               {
                   printf("correct answer \n");
                   printf("Next Question \n");
                   //question 4
                   printf("For which of the following disciplines is Nobel Prize awarded?: \n");
                   //options
                   printf("A.Physics and Chemistry B.Physiology or Medicine C.Literature, Peace and Economics D.All of the above \n");
                   char correct[20]="D";
                   char option[20];
                   int x;
                   //user interaction
                   printf("Enter the correct option \n");
                   //user input
                   scanf("%s", &option);
                   //checking the answer
                   x = strcmp(correct,option);
                   if(x==0)
                   {
                     printf("correct answer \n");
                     printf("Next Question \n");
                     //question 5
                     printf("Entomology is the science that studies: \n");
                     //options
                     printf("A.	Behavior of human beings B.	Insects  C.	The origin and history of technical and scientific terms  D.The formation of rocks \n");
                     char correct[20]="B";
                     char option[20];
                     int x;
                     //user interaction
                     printf("Enter the correct option \n");
                     //user input
                     scanf("%s", &option);
                     //checking the answer
                     x = strcmp(correct,option);  
                     if(x==0)
                     {
                        printf("correct answer \n");
                        //end of quiz
                        printf("Thankyou for playing the quiz \n");
                     }
                     else
                     {
                       printf("wrong answer, restart the quiz \n");
                     }
                   }
                   else
                   {
                     printf("wrong answer, restart the quiz \n");
                   }
               }
               else
               {
                  printf("wrong answer, restart the quiz \n");
               }
           }
           else
           {
           printf("wrong answer, restart the quiz \n");
           }
       }
       else
       {
           printf("wrong answer, restart the quiz \n");
       }
    }
    else
    {
        printf("please enter 1 to start quiz \n");
    }
return 0;
}