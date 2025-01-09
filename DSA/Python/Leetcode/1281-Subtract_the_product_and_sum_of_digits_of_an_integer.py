#  link : https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution(object):
    def subtractProductAndSum(self, n):
        sum = 0
        product = 1

        while n != 0:
            digit = n % 10
            product = product * digit
            sum = sum + digit
            n = n // 10

        ans = product - sum
        return ans

    def run_test(self):
        # Test case 1
        print(self.subtractProductAndSum(234))  # Expected: 15 (product = 2*3*4 = 24, sum = 2+3+4 = 9, difference = 24 - 9 = 15)

        # Test case 2
        print(self.subtractProductAndSum(4421))  # Expected: 21 (product = 4*4*2*1 = 32, sum = 4+4+2+1 = 11, difference = 32 - 11 = 21)

        # Test case 3
        print(self.subtractProductAndSum(10))  # Expected: -1 (product = 1*0 = 0, sum = 1+0 = 1, difference = 0 - 1 = -1)

# Create an instance of Solution and run the tests
solution = Solution()
solution.run_test()
