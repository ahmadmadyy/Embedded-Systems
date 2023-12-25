void print_array_loop_int (int int_arr[], int size)
{
    int counter = 0;
    printf("For the array of integers, using the loop...\n");
    for (counter; counter < size; counter++)
    {
        printf("Element [%d] = %d, and has address of 0x%x.\n", counter, int_arr[counter], &int_arr[counter]);
    }
    printf("\n");
}
void print_array_PointerArithmetic_char (char *char_arr_ptr, int size)
{
    int counter = 0;
    printf("For the array of characters, using the pointer arithmetic...\n");
    for (counter; counter < size; counter++)
    {
        printf("Element [%d] = %c, and has address of 0x%x.\n",counter, *char_arr_ptr, char_arr_ptr);
        char_arr_ptr++;
    }
    printf("\n");
}
