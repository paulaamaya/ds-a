#include <stdio.h>
#include <stdlib.h>

void merge_sort(int xs[], int a, int b);
void merge(int xs[], int a, int mid, int b);

int main(void){
    int xs[] = {0};
    int ys[] = {6,5,4,3,2,1};
    int zs[] = {1,6,9,7,3,0};

    merge_sort(xs, 0, 0);
    merge_sort(ys, 0, 5);
    merge_sort(zs, 0, 5);

    printf("xs: [%d]\n", xs[0]);

    printf("ys: [");
    for (int i = 0; i < 6; i++) {
        printf("%d, ", ys[i]);
    }
    printf("]\n");

    printf("zs: [");
    for (int i = 0; i < 6; i++) {
        printf("%d, ", zs[i]);
    }
    printf("]\n");

    return 0;
}

/**
* Sorts a subarray of a list in ascending order using the merge sort algorithm.
* 
* Merge sort is a divide-and-conquer algorithm that recursively divides the array into two halves,
* sorts each half, and then merges the two sorted halves into a single sorted subarray.
* 
* @param xs: The list of integers to be sorted.
* @param a: The starting index of the subarray to be sorted.
* @param b: The ending index of the subarray to be sorted.
**/
void merge_sort(int xs[], int a, int b){
    if (a < b) {
        int mid = (a + b) / 2;
        merge_sort(xs, a, mid);
        merge_sort(xs, mid + 1, b);
        merge(xs, a, mid, b);
    }
}

/**
* Merges two sorted subarrays of a list into a single sorted subarray.
* 
* The function takes two contiguous sorted subarrays, `xs[a:mid+1]` and `xs[mid+1:b+1]`,
* and merges them in-place into a single sorted subarray within `xs[a:b+1]`.
* 
*     @param xs: The list containing the subarrays to be merged.
*     @param a: The starting index of the first sorted subarray.
*     @param mid: The ending index of the first sorted subarray and immediately before
*     the start of the second sorted subarray.
*     @param b: The ending index of the second sorted subarray.
**/
void merge(int xs[], int a, int mid, int b){
    int left_size = mid - a + 1;
    int right_size = b - mid;
    int* left = malloc(left_size * sizeof(int));
    int* right = malloc(right_size * sizeof(int));

    // Create temporary copy of left subarray xs[a...mid]
    for (int m = 0; m < left_size; m++) { left[m] = xs[a + m]; }
    
    // Create temporary copy of right subarray xs[mid + 1...b]
    for (int n = 0; n < right_size; n++) { right[n] = xs[mid + 1 + n]; }

    // Indexes smallest elements in left and right
    int i = 0;
    int j = 0;
    // Indexes next location in xs to be filled
    int k = a;

    while (i < left_size && j < right_size) {
        if (left[i] <= right[j]) {
            xs[k] = left[i];
            i++;
        } else {
            xs[k] = right[j];
            j++;
        }
        k++;
    }

    // Having gone through all left or right, fill the remainder of xs with non-empty subarray
    while (i < left_size) {
            xs[k] = left[i];
            i++;
            k++;
    }

    while (j < right_size) {
            xs[k] = right[j];
            j++;
            k++;
    }

    free(left);
    free(right);
}
