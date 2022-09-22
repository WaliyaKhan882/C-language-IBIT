#include <stdio.h>
// unit converter using 2D array
float unit_converter(int source, int destination, float number)
{
    float answer;
    float converter[5][5];

    converter[0][0] = 1;
    converter[0][1] = 24;
    converter[0][2] = 24 * 60;
    converter[0][3] = 1 * 24 * 60 * 60;
    converter[0][4] = 1 * 24 * 60 * 60 * 1000;
    converter[1][0] = (float)(1) / (float)(24);
    converter[1][1] = 1;
    converter[1][2] = 1 * 60;
    converter[1][3] = 1 * 60 * 60;
    converter[1][4] = 1 * 60 * 60 * 1000;
    converter[2][0] = (float)(1) / (float)(24 * 60);
    converter[2][1] = (float)(1) / (float)60;
    converter[2][2] = 1;
    converter[2][3] = 1 * 60;
    converter[2][4] = 1 * 60 * 1000;
    converter[3][0] = (float)(1) / (float)(24 * 60 * 60);
    converter[3][1] = (float)(1) / (float)(3600);
    converter[3][2] = (float)(1) / (float)(60);
    converter[3][3] = 1;
    converter[3][4] = 1000;
    converter[4][0] = (float)(1) / (float)(24 * 60 * 60 * 1000);
    converter[4][1] = (float)(1) / (float)(3600 * 1000);
    converter[4][2] = (float)(1) / (float)(60 * 1000);
    converter[4][3] = (float)(1) / (float)1000;
    converter[4][4] = 1;

    answer = (float)converter[source][destination] * (float)number;
    printf("answer is %f\n", answer);
    return answer;
}
int main()
{
    int i, j;
    float answer, number;
    printf("Enter the number\n");
    scanf("%f", &number);
    printf("Enter the source and destination\n");
    scanf("%d %d", &i, &j);
    answer = unit_converter(i, j, number);
    printf("answer is %f\n", answer);
    return 0;
}