# link:https://leetcode.com/problems/palindrome-number

class Solution(object):
    def is_palindrome(self, number):
        """
        :type number: int
        :rtype: bool
        """
        if number < 0:
            return False

        reversed_number = 0
        original_number = number
        while original_number != 0:
            remainder = original_number % 10
            reversed_number = (reversed_number * 10) + remainder
            original_number //= 10

        return reversed_number == number
    
solution=Solution()

print(solution.is_palindrome(121))
print(solution.is_palindrome(-121))
print(solution.is_palindrome(10))