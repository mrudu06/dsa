#include <stdio.h>

int sum_array(int *nums, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += nums[i];
    }
    return sum;
}


int init_array(int *mynums, int mysize)
{
    for (int i = 0; i < mysize; i++)
    {
        mynums[i] = 0;
    }
}


int dummy(int num)
{
    printf("Dummy function called with %d\n", num);
    num = 10;
    printf("Dummy function called with %d\n", num);
    return num;
}



void dummyptr(int *num)
{
    printf("Dummy function called with %d\n", *num);
    *num = 10;
    printf("Dummy function called with %d\n", *num);
}


int* create_new_array_with_random_elements(int size)
{
    
    if (size <= 0)
     {
        printf("Error: Size must be greater than zero\n");
        return NULL;
    }

    int *array = (int*)malloc(size * sizeof(int));
    if (array == NULL) 
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
}

void initialize_array_with_random_elements(int *nums, int size)
{
    for (int i = 0; i < size; i++)
    { 
        nums[i] = rand() ;
        printf("nums[%d] = %d\n", i, nums[i]);
    }
}
int main()
{
    int a =12;
    printf("a = %d\n", a);
    a = dummy(a); 
    printf("a = %d\n", a);

    dummyptr(&a);
    printf("a = %d\n", a);




    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Array of 10 integers
    init_array(nums, 10);
    sum_array(nums, 10);
    create_new_array_with_random_elements(10);
    initialize_array_with_random_elements(*nums, 10);

}
