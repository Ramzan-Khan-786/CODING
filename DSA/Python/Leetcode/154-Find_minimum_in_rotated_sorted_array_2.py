# link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
class Solution(object):
    def findMin(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        return min(nums)

# Test case
solution = Solution()
nums = [3, 4, 5, 1, 2]
print(solution.findMin(nums))  # Expected output: 1
