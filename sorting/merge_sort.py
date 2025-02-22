from typing import List


def merge_sort(xs: List[int], a: int, b: int):
    """
    Sorts a subarray of a list in ascending order using the merge sort algorithm.

    Merge sort is a divide-and-conquer algorithm that recursively divides the array into two halves,
    sorts each half, and then merges the two sorted halves into a single sorted subarray.

    Parameters:
        xs (List[int]): The list of integers to be sorted. The sorting is performed in-place.
        a (int): The starting index of the subarray to be sorted.
        b (int): The ending index of the subarray to be sorted.
    """
    if a < b:
        mid = (a + b) // 2

        merge_sort(xs, a, mid)
        merge_sort(xs, mid + 1, b)
        merge(xs, a, mid, b)


def merge(xs: List[int], a: int, mid: int, b: int):
    """
    Merges two sorted subarrays of a list into a single sorted subarray.

    The function takes two contiguous sorted subarrays, `xs[a:mid+1]` and `xs[mid+1:b+1]`,
    and merges them in-place into a single sorted subarray within `xs[a:b+1]`.

    Parameters:
        xs (List[int]): The list containing the subarrays to be merged.
        a (int): The starting index of the first sorted subarray.
        mid (int): The ending index of the first sorted subarray and the
                   index immediately before the start of the second subarray.
        b (int): The ending index of the second sorted subarray.
    """
    left_size = mid - a + 1
    right_size = b - mid
    left = [0] * left_size
    right = [0] * right_size

    # Create temporary copies of sub-arrays xs[a: mid] and xs[mid + 1: b]
    for m in range(left_size):
        left[m] = xs[a + m]

    for n in range(right_size):
        right[n] = xs[mid + 1 + n]

    # Indexes the smallest remaining elements in left and right
    i, j = 0, 0
    # Indexes next index in xs to be filled
    k = a

    while i < left_size and j < right_size:
        if left[i] <= right[j]:
            xs[k] = left[i]
            i += 1
        else:
            xs[k] = right[j]
            j += 1
        k += 1

    # Having gone through all left or right, fill the remainder of xs with what's left
    while i < left_size:
        xs[k] = left[i]
        i += 1
        k += 1

    while j < right_size:
        xs[k] = right[j]
        j += 1
        k+= 1




