from typing import List


class Solution:

    def search(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) - 1

        while left <= right:
            mid = (left + right) // 2

            if nums[mid] == target:
                return mid

            elif nums[mid] < target:
                left = mid + 1

            else:
                right = mid - 1

        return -1

    def myPow(self, x: float, n: int) -> float:
        # Handle negative exponent
        if n < 0:
            x = 1 / x
            n = -n

        result = 1.0

        # Fast exponentiation
        while n > 0:
            if n % 2 == 1:
                result *= x

            x *= x
            n //= 2

        return result


# Example
s = Solution()

nums = [1, 3, 5, 7, 9]
target = 7

print("Index:", s.search(nums, target))

print("Power:", s.myPow(2.0, 10))