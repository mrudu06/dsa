
#include <stdbool.h>
#include <assert.h>
#include <time.h>
#include "array_utils.h"

#define MAX_SIZE 10

/*
 *rotate array rotaates the given original array for the given
 *number of times.
 *for example 1 2 3 4 5 6 7 8 9 10 is the original array
 *then it roates it to 9 10 1 2 3 4 5 6 7 8 when number of times
 *rotate is 2.
*/

void rotate_array(int *nums, int size, int rotate_count)
{
    for (int index = 0; index < rotate_count; index++)
    {
        int last_element = nums[size - 1];
        for (int i = size - 1; i > 0; i--)
        {
            nums[i] = nums[i - 1];
        }
        nums[0] = last_element;
    }
}

void reverse_array_for_rotate(int *nums,int size)
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
/*The new funciton rotate_array_optimize is done in order to reduce the time taken for the rotation . 
*Here unlike the other function the whole is not traversed instead reversing the whole array and traversing the 
*rotate_cnt no of elements.WHich makes this efficient.
*here first the whole array is rotated , then the rotate_cnt no of elemetns are reversed(rotated) then the whole array is 
*rotated to its changed position including the rotated elements .
*/

void rotate_array_optimize(int *nums , int size ,int rotate_count)
{
    reverse_array_for_rotate(nums , size);
    
    reverse_array_for_rotate(nums, rotate_count);

    reverse_array_for_rotate(&nums[rotate_count], size-rotate_count);
}







