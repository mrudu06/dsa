#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "array_utils.h"

struct point
{
    char name[32];
    int x;
    int y;

};



void print_point(struct point* p)
{
    printf("%s: [%d,%d]\n",p->name,p->x, p->y);
    p->x = 67;
}

// int swap_array_of_pf

int main()
{
   
    struct point p1;
    strcpy(p1.name,"mrudu");
    p1.x = 10;
    p1.y = 20;
    print_point(&p1);
    printf("The first p1 .x = =%d",p1.x);


}