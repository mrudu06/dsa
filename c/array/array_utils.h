#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int get_array_size_from_user();

int* create_new_array_with_user_input(int size);

int* create_new_array_with_random_elements(int size);

void initialize_array_from_user(int *nums, int size);

void initialize_array_with_random_elements(int *nums, int size);

int* clone_array(int *nums, int size);

void rotate_array(int* nums, int size, int number_of_times_rotate);

void print_array(int *nums, int size);

