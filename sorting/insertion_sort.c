#include <stdio.h>
void insertion_sort(int xs[], int n);

int main(void){
    int xs[] = {0};
    int ys[] = {6,5,4,3,2,1};
    int zs[] = {1,6,9,7,3,0};

    insertion_sort(xs, 1);
    insertion_sort(ys, 6);
    insertion_sort(zs, 6);

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
* Sorts a list of integers in ascending order using the insertion sort algorithm.
* 
* The algorithm iterates through the list, comparing each element to its predecessors
* and shifting them as needed to insert the current element in its correct position.
* 
* @param xs: An array of integers to be sorted.
* @param n: Size of aray to be sorted.
**/
void insertion_sort(int xs[], int n){
    // Start from second element
    for (int i = 1; i < n; i++) {
        int key = xs[i];
        int j = i - 1;
        // Move elements in xs[0...i-1] that are greater to key one position to right
        while (j >= 0 && key < xs[j]) {
            xs[j + 1] = xs[j];
            j--;
        }
        // Insert key in the correct position
        xs[j + 1] = key;
    }
}

