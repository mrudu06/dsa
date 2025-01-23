#include <array_utils.h>

#define MAX_SIZE 10

int main()
{
    int number_of_times_rotate;
    int my_nums[MAX_SIZE];
    srand(time(NULL));
    
    //int size = get_array_size_from_user();
    //int *array = create_new_array_with_user_input(size);

    // 1 2  3 4 5 6 7 8 9 10
    // 9 10 1 2 3 4 5 6 7 8

    initialize_array_with_random_elements(my_nums, 10);

    number_of_times_rotate = rand() % MAX_SIZE;  

    rotate_array(my_nums, MAX_SIZE, number_of_times_rotate);

    print_array(my_nums, MAX_SIZE);

    /* Verify rotate array*/
    

    return 0;
}
