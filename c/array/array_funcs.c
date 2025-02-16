#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "array_utils.h"

/* 1 2 3 4 5 6 7 8 9 0 
*  2 1 4 3 6 5 8 7 0 9 
*   This function basically reverses the element with the one next to it .
*   THis is done by iterating the element through even places .(ie)"idx" starts from 0 and then next moves to 2 , 4
*   and so on .
*   Here the print_array function fromt the array_utils is called in order to print the changes done to the orignial array "nums".
*/
int reverse_array_odd_even(int *nums ,int size)
{
    int temp = 0;
    for (int idx=0; idx < size; idx+=2)
    {
        temp = nums[idx];
        nums [idx] = nums[idx+1];
        nums[idx+1] = temp;
    }
    print_array("REversed Array of elemetns adjacent to each other:\n",nums,MAX_SIZE);  
}

int main()
{
    int *nums = create_new_array_and_intialize_with_user_input(MAX_SIZE);
    reverse_array_odd_even(nums,MAX_SIZE);

}