from typing import List

"""
Sorts a list of integers in ascending order using the insertion sort algorithm.

The function iterates through the list, comparing each element to its predecessors
and shifting them as needed to insert the current element in its correct position.

Parameters:
    xs (List[int]): A list of integers to be sorted.

Returns:
    List[int]: The sorted list of integers in ascending order.
"""
def insertion_sort(xs: List[int]) -> List[int]:
    for i in range(1, len(xs)):
        key = xs[i]
        j = i - 1
        while j >= 0 and xs[j] > key:
            xs[j], xs[j + 1] = xs[j + 1], xs[j]
            j -= 1
    return xs