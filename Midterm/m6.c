#include<stdio.h>
#include<string.h>
void month_counter(char month_name[200]) { //making fuction of month counter
    switch(month_name[0]) //by checking the first alphabet
    {
      case 'j': //for months starting with alphabet "j"
      switch(month_name[1]) //if 1st alphabet is same, checking the 2nd alphabet
      {
        case 'a':
        printf("Days in January are 31\n");
        break;

        case 'u':
        switch(month_name[2])// if 2nd alphabet is same checking the 3rd alphabet
        {
            case 'n':
            printf("Days in June are 30\n");
            break;
            
            case 'l':
            printf("Days in July are 31\n");
            break;
        }
      }
      break;

      case 'f': //for months starting with alphabet "f"
      printf("Days in February are either 28 or 29\n");
      break;

      case 'm': //for months starting with alphabet "m"
      switch(month_name[2]) // if 2nd alphabet is same checking the 3rd alphabet
      {
        case 'r':
        printf("Days in March are 31\n");
        break;

        case 'y':
        printf("Days in May are 31\n");
        break;
      }
      break;

      case 'a': //for months starting with alphabet "a"
      switch(month_name[1]) //if 1st alphabet is same, checking the 2nd alphabet
      {
        case 'p':
        printf("Days in April are 30\n");
        break;

        case 'u':
        printf("Days in August are 31\n");
        break;
      }
      break;

      case 's': //for months starting with alphabet "s"
      printf("Days in September are 30\n");
      break;

      case 'o': //for months starting with alphabet "o"
      printf("Days in October are 31\n");
      break;

      case 'n': //for months starting with alphabet "n"
      printf("Days in November are 30\n");
      break;

      case 'd': //for months starting with alphabet "d"
      printf("Days in December are 31\n");
      break;

      default:
      printf("please enter the correct month name in small letters\n");
      break;
    }
}
int main() {
    //variable declaration
    char month[200];
    //user interaction
    printf("Enter the name of month\n");
    //taking user input
    scanf("%s", &month);
    //calling the month_counter function
    month_counter(month);
    return 0;
}