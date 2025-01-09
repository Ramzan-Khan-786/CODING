# link: https://leetcode.com/problems/perfect-number/
class Solution(object):
    def checkPerfectNumber(self, num):
        if num < 2:
            return False
        ans = 0
        for i in range(1, int(num ** 0.5) + 1):
            if num % i == 0:
                ans += i
                if i != 1 and i != num // i:
                    ans += num // i
        return ans == num


def run_tests():
    solution = Solution()
    test_cases = [6, 28, 496, 8128, 2, 1, 12, 27]
    for num in test_cases:
        print(f"Input: {num}, Output: {solution.checkPerfectNumber(num)}")


run_tests()
