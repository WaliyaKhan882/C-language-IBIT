// writing a struct to a file and reading a struct from file
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define length 50
struct student
{
    int roll_num;
    char name[length];
    float height;
} ;
int main()
{
    FILE *fp;
    char name1[length];
    fp = fopen("structs.dat", "w");
    if (fp == NULL)
    {
        fprintf(stderr,"can't oprn file\n");
        exit(1);
    }
    struct student s;;
    printf("enter roll number of student 1\n");
    scanf("%d", &s.roll_num);
    printf("enter name of student 1\n");
    getchar();
    fgets(s.name, length, stdin);
    printf("enter height of student 1 in inches\n");
    scanf("%f", &s.height);
    fwrite(&s, sizeof(struct student), 1, fp);
    if (fwrite != 0)
    {
        printf("file contents written \n");
    }
    else
    {
        printf("error writing file \n");
    }
    fclose(fp);
    FILE *fpp;
    struct student x;
    fpp=fopen("structs.dat","r");
    if(fpp==NULL)
    {
        fprintf(stderr,"error to open the file\n");
        exit(1);
    }

    while(fread(&x, sizeof(struct student), 1, fpp))
    {
        printf(" roll_no:%d\n name= %s height= %.2f\n",x.roll_num,x.name,x.height);
    }
    fclose(fpp);
    return 0;
}
