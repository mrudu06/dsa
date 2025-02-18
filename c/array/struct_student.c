#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "array_utils.h"

struct student
{
    char name[32];
    int maths_m;
    int science_m;
    int social_m;
    int eng_m;
    int total_m;

};

void print_student(struct student *s)
{
    printf("MARKSHEET\n");
    printf("NAME: %s\n",s->name);
    char* course = "ENGLISH";
    printf("%10s: %10d\n", course, s->eng_m);
    course = "MATHS";
    printf("%10s: %10d\n", course, s->maths_m);
    course = "SCIENCE";
    printf("%10s: %10d\n", course, s->science_m);
    course = "SOCIAL";
    printf("%10s: %10d\n", course, s->social_m);
    printf("_____________________________\n");
    course = "TOTAL";
    printf("%10s: %10d\n", course, s->total_m);
    printf("_____________________________\n");


}


void calculate_student_total(struct student* s1)
{
    s1->total_m = s1->maths_m + s1->eng_m + s1->science_m + s1->social_m;

}


int main()
{
   
    struct student s1;
    strcpy(s1.name,"mrudu");
    s1.maths_m = 10;
    s1.science_m = 20;
    s1.social_m = 20;
    s1.eng_m = 30;
    calculate_student_total(&s1);
    print_student(&s1);  


}