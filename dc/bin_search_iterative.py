from typing import List

def binary_search(xs : List[int], x: int, first: int, last: int) -> bool:
    """
    Performs a binary search on a sorted list to determine if a target value exists within it.

    Parameters:
        xs (List[int]): A sorted list of integers to search.
        x (int): The target value to find in the list.
        first (int): The starting index of the current search range.
        last (int): The ending index of the current search range.

    Returns:
        bool: `True` if the target value `x` is found in the list; `False` otherwise.

    === PRE-CONDITION ===
    The input list `xs` must be sorted in ascending order.
    """
    while first <= last:
        mid = (first + last) // 2

        # If element appears in the middle, no need to look further
        if x == xs[mid]:
            return True
        elif x < xs[mid]:
            last = mid - 1
        else:
            first = mid + 1

    return False
