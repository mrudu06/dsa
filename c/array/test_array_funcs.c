#include <assert.h>
#include "array_utils.h"

void test_get_array_size_from_user()
{
    int size = get_array_size_from_user();
    assert(size > 0 && "Error: Array size must be greater than 0.");
}

void create_new_array_test()
{
    int* nums = create_new_array();
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
    int* nums = create_new_array_and_intialize_with_random_elements();
    assert(nums != NULL && "Error: Failed to allocate memory for random-initialized array.");
}

int main()
{
    test_get_array_size_from_user();
    create_new_array_test();
    // create_new_array_and_intialize_with_user_input_test(); 
    create_new_array_and_intialize_with_random_elements_test();

    return 0;
}
