from typing import List, Tuple


class Sort:

    def merge_sort(self, arr: List[int]) -> List[int]:

        if len(arr) <= 1:
            return arr

        mid = len(arr) // 2

        left = self.merge_sort(arr[:mid])
        right = self.merge_sort(arr[mid:])

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

        result.extend(left[i:])
        result.extend(right[j:])

        return result

s = Sort()

arr = [7, 3, 9, 2]

print(s.merge_sort(arr))


        