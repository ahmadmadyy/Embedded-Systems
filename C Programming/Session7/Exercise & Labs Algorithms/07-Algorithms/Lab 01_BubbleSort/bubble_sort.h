#ifndef BUBBLE_SORT_H_INCLUDED
#define BUBBLE_SORT_H_INCLUDED

int compare(int element_1, int element_2);
void Swap( int* pvar1, int* pvar2);

int (*p_compare_fn)(int,int) = compare;
int (*p_swap_fn)(int*, int*) = Swap;

#endif // BUBBLE_SORT_H_INCLUDED
