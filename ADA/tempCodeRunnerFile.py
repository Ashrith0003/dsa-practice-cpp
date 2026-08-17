from typing import List


class Sort:

    def merge_sort(self, arr: List[int]) -> List[int]:
        # Base case
        if len(arr) <= 1:
            return arr

        # Find middle
        mid = len(arr) // 2

        # Divide
        left = self.merge_sort(arr[:mid])
        right = self.merge_sort(arr[mid:])

        # Merge
        return self.merge(left, right)

    def merge(self, left: List[int], right: List[int]) -> List[int]:
        result = []
        i = 0
        j = 0

        while i < len(left) and j < len(right):
            if left[i] <= right[j]:
                result.append(left[i])
                i += 1
            else:
                result.append(right[j])
                j += 1

        # Add remaining elements
        result.extend(left[i:])
        result.extend(right[j:])

        return result

    def quick_sort(self, arr: List[int]) -> List[int]:
        # Base case
        if len(arr) <= 1:
            return arr

        # Choose pivot
        pivot = arr[-1]

        # Partition
        left = []
        right = []

        for num in arr[:-1]:
            if num <= pivot:
                left.append(num)
            else:
                right.append(num)

        # Recursively sort and combine
        return self.quick_sort(left) + [pivot] + self.quick_sort(right)


# Example
s = Sort()

arr = [5, 2, 8, 1, 3]

print("Original:", arr)
print("Merge Sort:", s.merge_sort(arr))
print("Quick Sort:", s.quick_sort(arr))