#include <stdio.h>

/**
* Sorts a list of integers in ascending order using the selection sort algorithm.
* 
* The algorithm works by iteratively finding the smallest element in the unsorted portion of the list
* and swapping it with the first element in the unsorted portion. This process continues until the entire
* list is sorted.
* 
* @param xs: An array of integers to be sorted.
* @param n: Size of aray to be sorted.
**/
void selection_sort(int xs[], int n){
    for(int i = 0; i < n; i++){
        int smallest = xs[i];
        for (int j = i; j < n; j++) {
            if (xs[j] < xs[i]) {
                smallest = j;
            }
        }
        int temp = xs[i];
        xs[i] = xs[smallest];
        xs[smallest] = temp;
    }
}

int main(void){
    int xs[] = {0};
    int ys[] = {6,5,4,3,2,1};
    int zs[] = {1,6,9,7,3,0};

    selection_sort(xs, 1);
    selection_sort(ys, 6);
    selection_sort(zs, 6);

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

