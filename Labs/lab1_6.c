//age checker
#include<stdio.h>
int main() {
    //variable declarations
    int user_age = 0;
    //user interaction
    printf("hello user, please enter your age, \n");
    //take user input
    scanf("%d", &user_age);
    //print the input
    printf("The user age is : %d, \n", user_age);
    //let the code decline the age category
    if((user_age == 0) || (user_age == 1)) 
    {
      printf("hey user, you are an infant baby, \n");        
    }
    else if ((user_age > 1) && (user_age <=5))
    {
      printf("hey user, you are a toddler, \n");
    }
    else if((user_age >5) && (user_age < 13))
    {
        printf("hey user, you are a child, \n");
    }
    else if((user_age >12) && (user_age <20))
    {
        printf("hey user, you are a teenager, \n");
    }
    else if((user_age>19) &&(user_age<=60))
    {
        printf("hey user, your are an adult, \n");
    }
    else if((user_age >60) && (user_age<80))
    {
        printf("hey user, you are a senior citizen, \n");
    }
    else if((user_age > 80))
    {
        printf("hey user, you are a dead person, \n");
    }
    else
    {
        printf("hey user, this age cannot be handled, \n");
    }
    return 0;
}