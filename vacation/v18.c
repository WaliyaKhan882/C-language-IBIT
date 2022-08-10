#include<stdio.h>
int main() {
    /*ABC pattern
      A 
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A*/
    int total_rows,space, row, character,center=1;
    char letter='A';
    printf("Enter the total number of rows\n");
    scanf("%d", &total_rows);
    for(row=1; row<=total_rows ;row++)
    {
        for(space=1;space<=(total_rows-row);space++)
            {printf("  ");}
        for(character=0;character<=(center/2);character++)
        {
            printf("%c ", letter++);
        }
        letter=letter-2;
        for(character=0;character<(center/2);character++)
        {
            printf("%c ", letter--);
        }
        center=center+2;
        letter='A';
        printf("\n");
    }
    return 0;
}