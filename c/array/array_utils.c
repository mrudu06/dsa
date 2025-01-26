#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "array_utils.h"

int get_array_size_from_user()
{
    int size;
    do {
        printf("Enter the size of the array: ");
        scanf("%d", &size);
        if (size <= 0) 
        {
            printf("Error: Size must be greater than zero\n");
        }
    } 
    while (size <= 0);
    return size;
}

int *create_new_array(int size)
{
    int *nums = (int*)malloc(size * sizeof(int));
    if (nums == NULL)
    {
        printf("Memory allocation failed!\n");
        abort();
    }

    memset(nums, 0, size * sizeof(int));
    return nums;
}

void initialize_array_with_user_input(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &array[i]);
    }    
}

void initialize_array_with_random_elements(int *nums, int size)
{
    for (int i = 0; i < size; i++)
    {
        nums[i] = rand();
    }
}

int *create_new_array_and_intialize_with_user_input(int size)
{
    int* nums = create_new_array(size);
    initialize_array_from_user(nums, size);
    return nums;
}

int *create_new_array_and_initalize_with_random_elements(int size)
{    
    int* array = create_new_array(size);
    initialize_array_with_random_elements(array, size);
    return array;
}

int *clone_array(int *nums, int size)
{   
    int *clone_array = create_new_array(size);
    memcpy(clone_array, nums, size * sizeof(int));
    return clone_array;
}



void print_array(char name,int *nums, int size)
{
    printf("%c",&name);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
