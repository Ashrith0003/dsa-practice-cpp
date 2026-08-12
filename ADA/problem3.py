from typing import List, Tuple
import heapq


class Solution:

    def findKthLargest(self, nums: List[int], k: int) -> int:
        # Min-heap of size k
        heap = []

        for num in nums:
            heapq.heappush(heap, num)
  
            if len(heap) > k:
                heapq.heappop(heap)

        return heap[0]

    def findMinMax(self, nums: List[int]) -> Tuple[int, int]:
        if not nums:
            raise ValueError("Array cannot be empty")

        minimum = nums[0]
        maximum = nums[0]

        for num in nums:
            if num < minimum:
                minimum = num

            if num > maximum:
                maximum = num

        return minimum, maximum


# Example
s = Solution()

nums = [3, 2, 1, 5, 6, 4]

print("2nd Largest:", s.findKthLargest(nums, 2))
print("Min-Max:", s.findMinMax(nums))