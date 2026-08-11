from typing import List

class Solution:
    def myPow(self,x:float,n:int)->float:
        if n == 0 :
            return 1

        if n < 0:
            x = 1/x
            n = -n

        result = 1

        while n > 0:

            if n % 2 == 1:
                result*=x

            x*=x
            n=n//2
        return result
    


Obj = Solution()

x =float(input("Enter the X : "))
n =int(input("Enter the N : "))

result = Obj.myPow(x,n)
print(f"The answer is {result}")