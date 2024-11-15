from typing import List

def insertion_sort(xs: List[int]) -> List[int]:
    for i in range(1, len(xs)):
        key = xs[i]
        j = i - 1
        while j > 0 and xs[j] > key:
            xs[j], xs[j - 1] = xs[j - 1], xs[j]
            j -= 1
    return xs