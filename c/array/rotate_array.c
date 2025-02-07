
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



/* 
 * test_rotate_array checks if the rotated array actually represents the
 * origianal_array after nu number of rotations from the right hand side.
*/
bool test_rotate_array(int *rotated_array, int size, int n,int* orig_array)
{


// 1 2 3 4 5 6 7 8 9 10
// n= 2

//rotated_array

//i=0; i<n; i++ 
// j=size-1; j>size-n; j--
// 9 10 1 2 3 4 5 6 7 8
// 1 2 3 4 5 6 7 8 9 10
//here the rotation takes place in place.

    /* this loop checks the first n elements of the rotated array
     * with the last n elements of the original array in reverse order.
     * For example check the  9, 10 in rotated array with 10,9 in reverse.
     */
    for (int i=0, j=size-1; i<n; i++,j--)
    {
        if (rotated_array[i] != orig_array[j])
        {
            return false;
        }
    
    }
    /* this loop checks the first size-n elements of the rotated array
     * with the first size-n elements of the original array in same order.
     * For example check the  1 to 8 in rotatedarray with 1 to 8 in same order.
     */
    for (int i=n,j=0; i<size;i++,j++)
    {
        if (rotated_array[i] != orig_array[j])
        {
            return false;
            
        }
    }

    return true;
}



int main()
{
    int rotate_count;
    int *my_nums;
    int *orig_array;
    srand(time(NULL));

    rotate_count = rand() % MAX_SIZE; 
    
    //This function call gets the user input for the original arraay
    my_nums = create_new_array_and_intialize_with_user_input(MAX_SIZE);

    // initialize_array_with_random_elements(my_nums, 10);
    //This initializes the array with random elements.
    
    //here the original array is stored as the the array gets rotated in later part
    //hence it is stored in orig array.

    orig_array = clone_array(my_nums,MAX_SIZE);
    rotate_array(my_nums, MAX_SIZE, rotate_count);    
    assert(test_rotate_array(my_nums,MAX_SIZE,rotate_count,orig_array));

    // "origginal array: [ 10, 20, 30 ]
    // "rotated array: [ 30, 10, 20 ]

    print_array("Original array",orig_array,MAX_SIZE);
    print_array("Rotated array",my_nums,MAX_SIZE);

    /* Verify rotate array*/   

    return 0;
}
