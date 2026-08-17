from typing import List, Tuple


def findKthLargest(nums: List[int], k: int) -> int:

    nums.sort(reverse=True)
    return nums[k-1]

  

def findMinMax(nums: List[int]) -> Tuple[int, int]:
    maximum = nums[0]
    minmum =nums[0]

    for num in nums:

        if num > maximum:
            maximum = num
        elif num < minmum:
            minmum = num

    return maximum,minmum