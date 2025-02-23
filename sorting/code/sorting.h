# ifndef SORTING_H
# define SORTING_H

/**
* Sorts a list of integers in ascending order using the insertion sort algorithm.
* 
* The algorithm iterates through the list, comparing each element to its predecessors and 
* shifting them as needed to insert the current element in its correct position.
* 
* @param xs: A list of integers to be sorted.
**/
void insertion_sort(int* xs);


/**
* Sorts a subarray of a list in ascending order using the merge sort algorithm.

* Merge sort is a divide-and-conquer algorithm that recursively divides the array into two halves,
* sorts each half, and then merges the two sorted halves into a single sorted subarray.

* @param xs: The list of integers to be sorted.
* @param a: The starting index of the subarray to be sorted.
* @param b: The ending index of the subarray to be sorted.
**/
void merge_sort(int* xs, int a, int b);

/**
* Sorts a list of integers in ascending order using the selection sort algorithm.
*
* The algorithm  iteratively finding the smallest element in the unsorted portion of the list
* and swapping it with the first element in the unsorted portion. This process continues until 
* the entire list is sorted.
*
* @param xs: The list of integers to be sorted.
**/
void selection_sort(int* xs);

#endif
