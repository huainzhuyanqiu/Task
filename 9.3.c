#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student
{
    int num;
    char name[10];
    float score[3];
} stu[5];
void print(struct student s[]);
int main()
{
    int i, j;
    for (i=0; i<5; i++){
        printf("Please enter No.%d student num, name, score: ", i+1);
        scanf("%d %s", &stu[i].num, stu[i].name);
        for (j=0; j<3; scanf("%f", &stu[i].score[j++]));
    }
    print(stu);
    return 0;
}
void print(struct student s[])
{
    int i, j;
    for (i=0; i<5; printf("\n"), i++){
        printf("%d %-10s ", s[i].num, s[i].name);
        for (j=0; j<3; printf("%.2f ", s[i].score[j++]));
    }
}
