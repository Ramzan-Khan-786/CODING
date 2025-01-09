# link:https://leetcode.com/problems/reverse-integer
class Solution(object):
    def reverse(self, x):
        INT_MAX = 2**31 - 1  
        INT_MIN = -2**31
        sign = -1 if x < 0 else 1
        x = abs(x)
        ans = 0

        while x != 0:
            digit = x % 10
            x = x // 10
            if ans > INT_MAX // 10 or (ans == INT_MAX // 10 and digit > INT_MAX % 10):
                return 0
            ans = ans * 10 + digit

        return ans * sign

solution = Solution()
print(solution.reverse(123))        
print(solution.reverse(-123))       
print(solution.reverse(120))        
print(solution.reverse(0))          
print(solution.reverse(1534236469)) 
print(solution.reverse(-2147483648))
