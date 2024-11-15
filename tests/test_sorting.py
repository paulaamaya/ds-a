import pytest
import sorting.insertion_sort as insertion_sort

class TestSorting:

    def setup(self, method):
        self.first = []
        self.second = [1]
        self.third = [1, 2, 3]
        self.fourth = [1, 3, 2]
        self.fifth = [1, 5, 8, 9, 2, 3, 1, 1, 0, 4, 7, 8, 2, 6, 4]


    def test_insertion_sort(self):
        assert not self.first