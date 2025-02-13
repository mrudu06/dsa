#include <stdbool.h>
#include <assert.h>
#include <time.h>
#include "array_utils.h"

#define MAX_SIZE 10

/*
* Reverse Array
* tmp
*nums[fwd_index]           nums[reverse_index]
*     5          2   3   4   1
* 1 2 3 4 5 
* 5 4 3 2 1
* last-starts from end ,frwd_index starts from 0
* stops when frwd_index,size/2
* swaps the two munbers by first assigning one number to temp and then assigning the temp to the other number.
* This is the same method as swapping two numbers.
*It reverses the whole array as shown in place.
*/
void reverse_array(int *nums,int size)
{
    int last = size-1;
    for (int frwd_index = 0; frwd_index < size/2; frwd_index++)
    {
        int tmp;
        tmp = nums[frwd_index];
        nums[frwd_index] = nums[last-frwd_index];
        nums[last-frwd_index] = tmp;
    }
}



