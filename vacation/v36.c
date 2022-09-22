//making struct
#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int rollno;
    float height;
} student1,student2;

int main() {
    strcpy(student1.name,"Waliya");
    student1.rollno=24;
    student1.height=5.2;

    strcpy(student2.name,"Abeeha");
    student2.rollno=10;
    student2.height=5.3;

    printf("Name:%s\n",student1.name);
    printf("RollNo:%d\n",student1.rollno);
    printf("Height:%.2f\n",student1.height);

printf("\n");

    printf("Name:%s\n",student2.name);
    printf("RollNo:%d\n",student2.rollno);
    printf("Height:%.2f\n",student2.height);

    return 0;
}