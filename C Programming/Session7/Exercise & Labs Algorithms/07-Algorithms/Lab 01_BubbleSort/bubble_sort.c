int compare(int* element_1, int* element_2)
{
    if (*element_1 > *element_2) return 1;
    else return 0;
}

void Swap( int* pvar1, int* pvar2)
{
    int temp = *pvar1;
    *pvar1 = *pvar2;
    *pvar2 = temp;
}
