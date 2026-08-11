from typing import List

class Solution:
    def search(self,nums:List[int],target:int)->int:
        left = 0
        right = len(nums)-1

        while left<=right:
            mid = left+(right - left)//2

            if(nums[mid] == target):
                return mid

            if(nums[mid] < target):
                left = mid+1
            else:
                right = mid-1
        return -1


Obj = Solution()

nums = list(map(int,input("Enter the sorted array : ").split()))

target = int(input("Enter target : "))

print("Answer =", Obj.search(nums, target))

