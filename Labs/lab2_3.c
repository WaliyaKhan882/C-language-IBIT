//telling the grade after calculating their percentage based on five subjects
#include<stdio.h>
int main() {
	//variable declaration
	int phy, bio, chem, math, comp;
	float per;
	//user interaction
	printf("enter marks, \n");
    //user input
    scanf("%d %d %d %d %d", &phy, &bio, &chem, &math, &comp);
    //calculating percentage 
    per = (phy+bio+chem+math+comp)/5.0;
    //percentage output
    printf("Your percentage is : %.2f \n", per);
    //finding grade according to percentage
    if (per>=90)
    {
    printf("Your grade is A");
	}
	else if (per>=80)
    {
    printf("Your grade is B");
	}
	else if (per>=70)
    {
    printf("Your grade is C");
	}
	else if (per>=60)
    {
    printf("Your grade is D");
	}
	else if (per>=40)
    {
    printf("Your grade is E");
	}
	else
	{
	printf("You are fail");
	}
	return 0;
}
    
    
