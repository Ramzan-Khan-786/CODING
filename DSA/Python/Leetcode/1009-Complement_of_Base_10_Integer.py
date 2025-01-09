# link: https://leetcode.com/problems/complement-of-base-10-integer/


class Solution(object):
    def bitwiseComplement(self, n):
        """
        :type n: int
        :rtype: int
        """
        m = n
        mask = 0

        if n == 0:
            return 1

        while m != 0:
            mask = (mask << 1) | 1
            m = m >> 1

        ans = (~n) & mask
        return ans

    def run_test(self):
        # Test case 1
        print(self.bitwiseComplement(5))  # Expected: 2 (binary 101 -> 010)

        # Test case 2
        print(self.bitwiseComplement(7))  # Expected: 0 (binary 111 -> 000)

        # Test case 3
        print(self.bitwiseComplement(10))  # Expected: 5 (binary 1010 -> 0101)

        # Test case 4
        print(self.bitwiseComplement(0))  # Expected: 1 (binary 0 -> 1)


# Create an instance of Solution and run the tests
solution = Solution()
solution.run_test()
