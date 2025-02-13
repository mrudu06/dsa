#include "array_utils.h"
#include <time.h>
#define MAX_SIZE 10

void test_get_array_size_from_user()
{
    int size = get_array_size_from_user();
    assert(size > 0 && "Error: Array size must be greater than 0.");
}

void create_new_array_test()
{
    int* nums = create_new_array(MAX_SIZE);
    assert(nums != NULL && "Error: Failed to allocate memory for new array.");
}

 void create_new_array_and_intialize_with_user_input_test()
 {
    int size ;
     int* nums = create_new_array_and_intialize_with_user_input(size);
     assert(nums != NULL && "Error: Failed to allocate memory for user-initialized array.");
 }

void create_new_array_and_intialize_with_random_elements_test()
{
    int *nums = create_new_array_and_initalize_with_random_elements(MAX_SIZE);
    assert(nums != NULL && "Error: Failed to allocate memory for random-initialized array.");
}

/* 
 * test_rotate_array checks if the rotated array actually represents the
 * origianal_array after  number of rotations from the right hand side.
*/
bool test_rotate_array(int *rotated_array, int size, int rotate_cnt,int* orig_array)
{

// 1 2 3 4 5 6 7 8 9 10
// rotate_cnt= 2

//rotated_array

//i=0; i<rotate_cnt; i++ 
// j=size-1; j>size-rotate_cnt; j--
// 9 10 1 2 3 4 5 6 7 8
// 1 2 3 4 5 6 7 8 9 10
//here the rotation takes place in place.

    /* this loop checks the first rotate_cnt elements of the rotated array
     * with the last rotate_cnt elements of the original array in reverse order.
     * For example check the  9, 10 in rotated array with 10,9 in reverse.
     */
    for (int i=0, j=size-1; i<rotate_cnt; i++,j--)
    {
        if (rotated_array[i] != orig_array[j])
        {
            return false;
        }
    
    }
    /* this loop checks the first size-rotate_cnt elements of the rotated array
     * with the first size-rotate_cnt elements of the original array in same order.
     * For example check the  1 to 8 in rotatedarray with 1 to 8 in same order.
     */
    for (int i=rotate_cnt,j=0; i<size;i++,j++)
    {
        if (rotated_array[i] != orig_array[j])
        {
            return false;
            
        }
    }

    return true;
}




bool test_reverse_array(int *reversed_array, int size,int* orig_array)
{


// 1 2 3 4 5 6 7 8 9 10
// rotate_cnt= 2

//reversed_array

//i=0; i<j; i++ 
// j=size-1; j>size-rotate_cnt; j--
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
        if (reversed_array[i] != orig_array[last_idx-1-i])
        {
            return false;
        }
    }
    return true;    


}

int rotate_test_main()
{
    int rotate_count;
    int *my_nums;
    int *orig_array;
    // srand(time(NULL));

    rotate_count = rand() % MAX_SIZE; 
    
    //This function call gets the user input for the original arraay
    my_nums = create_new_array_and_intialize_with_user_input(MAX_SIZE);

    //initialize_array_with_random_elements(my_nums, 10);
    //This initializes the array with random elements.
    
    //here the original array is stored as the the array gets rotated in later part
    //hence it is stored in orig array.

    orig_array = clone_array(my_nums,MAX_SIZE);
    rotate_array(my_nums, MAX_SIZE, rotate_count);    
    assert(test_rotate_array(my_nums,MAX_SIZE,rotate_count,orig_array));
    rotate_array_optimize(my_nums,MAX_SIZE,rotate_count);
    assert(test_rotate_array(my_nums,MAX_SIZE,rotate_count,orig_array));


    // "origginal array: [ 10, 20, 30 ]
    // "rotated array: [ 30, 10, 20 ]

    print_array("Original array",orig_array,MAX_SIZE);
    print_array("Rotated array",my_nums,MAX_SIZE);


    /* Verify rotate array*/   

    return 0;
}

int reverse_test_main()
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

    // "origginal array: [ 10, 20, 30 ]
    // "reversed array: [ 30, 10, 20 ]

    print_array("Original array :",orig_array,MAX_SIZE);
    print_array("Reversed array :",my_nums,MAX_SIZE);

    /* Verify reverse array*/   

    return 0;
}


int main()
{
    test_get_array_size_from_user();
    create_new_array_test();
    create_new_array_and_intialize_with_user_input_test(); 
    create_new_array_and_intialize_with_random_elements_test();
    rotate_test_main();
    reverse_test_main();

    return 0;
}
