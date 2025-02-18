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

struct student* create_students(int *size) 
{
    printf("Enter number of students: ");
    scanf("%d", size);

    struct student *students = (struct student *)malloc((*size) * sizeof(struct student));
    
    for (int detail = 0; detail < *size; detail++)
    {
        printf("Enter name, Maths mark, Science mark, Social mark, English mark for student %d: ", detail + 1);
        scanf("%s %d %d %d %d", 
              students[detail].name, 
              &students[detail].maths_m, 
              &students[detail].science_m, 
              &students[detail].social_m, 
              &students[detail].eng_m);

    }

    return students;
}



int main() 
{
    int size;
    struct student* students = create_students(&size);

    return 0;
}
