#include <stdbool.h>
#include <assert.h>
#include <time.h>
#include "array_utils.h"

#define MAX_SIZE 10

/*
* Reverse Array
 * tmp
* nums[fwd_index]                       nums[reverse_index]
*     5                2     3    4        1
* 1 2 3 4 5 
* 5 4 3 2 1
* j-starts from end , i starts from 0
* stops when j=i
*nums[j] = nums[i]
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

bool test_reverse_array(int *reversed_array, int size,int* orig_array)
{


// 1 2 3 4 5 6 7 8 9 10
// n= 2

//reversed_array

//i=0; i<j; i++ 
// j=size-1; j>size-n; j--
// 1 2 3 4 5 
// 5 4 3 2 1
//here the rotation takes place in place.

    /* this loop checks the reversed array if the reversing is carried out correctly.
     * The checking is done for the first half since the reversing is same from wither side.
     * For example it checks reversed_array[0](1)==orig_array[last_idx](1)
     * the last_idx is iterated from the size-1.
     */

    int last_idx = size-1;
    for (int i=0; i<size/2; i++)
    {
        if (reversed_array[i] != orig_array[last_idx])
        {
            return false;
        }
    
    }
}

int main()
{
    int rotate_count;
    int *my_nums;
    int *orig_array;
    srand(time(NULL));

  
    //This function call gets the user input for the original arraay
    my_nums = create_new_array_and_initalize_with_random_elements(MAX_SIZE);

    // initialize_array_with_random_elements(my_nums, 10);
    //This initializes the array with random elements.
    
    //here the original array is stored as the the array gets rotated in later part
    //hence it is stored in orig array.

    orig_array = clone_array(my_nums,MAX_SIZE);
    reverse_array(my_nums, MAX_SIZE);    
    assert(test_reverse_array(my_nums,MAX_SIZE,orig_array));

    reverse_array(my_nums,MAX_SIZE);

    // "origginal array: [ 10, 20, 30 ]
    // "rotated array: [ 30, 10, 20 ]

    print_array("Original array :",orig_array,MAX_SIZE);
    print_array("Reversed array :",my_nums,MAX_SIZE);

    /* Verify reverse array*/   

    return 0;
}
