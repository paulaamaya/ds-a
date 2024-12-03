from typing import List

def selection_sort(xs: List[int]):
    """
    Sorts a list of integers in ascending order using the selection sort algorithm.

    The algorithm works by iteratively finding the smallest element in the unsorted portion of the list
    and swapping it with the first element in the unsorted portion. This process continues until the entire
    list is sorted.

    Parameters:
        xs (List[int]): The list of integers to be sorted. The sorting is done in-place.
    """
    for i in range(len(xs) - 1):
        smallest = i
        for j in range(i + 1, len(xs)):
            if xs[j] < xs[smallest]:
                smallest = j
        xs[i], xs[smallest] = xs[smallest], xs[i]
