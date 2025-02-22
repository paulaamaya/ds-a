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
    if last < first:
        return False
    elif last == first:
        return x == xs[first]
    else:
        mid = (first + last) // 2
        if x == xs[mid]:
            return True
        elif x < xs[mid]:
            return binary_search(xs, x, 0, mid)
        else:
            return binary_search(xs, x, mid + 1, last)