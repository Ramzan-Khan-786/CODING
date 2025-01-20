# leetcode.com/problems/find-peak-element
class Solution(object):
    def findPeakElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) == 0:
            return 0
        
        return nums.index(max(nums))


def runTest():
    solution = Solution()

    # Test case 1
    nums = [1, 2, 3, 1]
    result = solution.findPeakElement(nums)
    print(f"Test case 1: nums = {nums}, peak index = {result}")

    # Test case 2
    nums = [1, 2, 1, 3, 5, 6, 4]
    result = solution.findPeakElement(nums)
    print(f"Test case 2: nums = {nums}, peak index = {result}")

    # Test case 3
    nums = [1, 2, 3, 4, 5, 6, 7]
    result = solution.findPeakElement(nums)
    print(f"Test case 3: nums = {nums}, peak index = {result}")

    # Test case 4 (Edge case with a single element)
    nums = [1]
    result = solution.findPeakElement(nums)
    print(f"Test case 4: nums = {nums}, peak index = {result}")

runTest()
