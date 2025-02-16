#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "array_utils.h"
#define MAX_SIZE 10


/* 
 *  get_array_size_from_user gets the array size from the user.
 *  it makes sure the  size given is a positive integer.
 */
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
    // allocates new array memory for the nums array using the max size input given from the input taken 
    // from the user .If the size of the array is zero then it gets terminated. 
    int *nums = (int*)malloc(size * sizeof(int));
    assert(nums != NULL);

    memset(nums, 0, size * sizeof(int));
    return nums;
}

void initialize_array_with_user_input(int *array, int size)
{
    // This function initializes the array with value from user.

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &array[i]);
    }    
}

void initialize_array_with_random_elements(int *array, int size)
{
    // HTis funiton initializes the array with random elements generated.
    for (int i = 0; i < size; i++)
    {
        array[i] = rand();
    }
}

int *create_new_array_and_intialize_with_user_input(int size)
{
    // This funciton is the combination of the above two functions with a values taken from user.
    int *nums = create_new_array(size);
    initialize_array_with_user_input(nums, size);
    return nums;
}

int *create_new_array_and_initalize_with_random_elements(int size)
{    
    // This function us the combination of the above two funitons with values generated randomly. 
    int *array = create_new_array(size);
    initialize_array_with_random_elements(array, size);
    return array;
}

int *clone_array(int *nums, int size)
{
    // This funciton initializes the clone array which helps to check if the rotation of array is done corretly.   
    int *clone_array = create_new_array(size);
    memcpy(clone_array, nums, size * sizeof(int));
    return clone_array;
}

// char n='0';
// char *name = "mrudu";
// 10000 => m, 10001 => r, 10002 => u , 10003 ->d , 10004 -> u, 10005 -> 0;
// 

void print_array(char *name,int *nums, int size)
{
    printf("%s: ",name);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
