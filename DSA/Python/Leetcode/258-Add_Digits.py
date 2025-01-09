# link: https://leetcode.com/problems/add-digits/
class Solution(object):
    def addDigits(self, n):
        sum = n
        while sum >= 10:
            tempsum = 0
            ncopy = sum
            while ncopy != 0:
                tempsum = tempsum + ncopy % 10
                ncopy = ncopy // 10
            sum = tempsum
        return sum


def run_tests():
    solution = Solution()
    print("Input: 7, Output:", solution.addDigits(7))
    print("Input: 38, Output:", solution.addDigits(38))
    print("Input: 1234, Output:", solution.addDigits(1234))
    print("Input: 987654321, Output:", solution.addDigits(987654321))


run_tests()
