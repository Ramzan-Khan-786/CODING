#  link : https://leetcode.com/problems/two-sum/
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        n = len(nums)

        for i in range(0, n):
            for j in range(1 + i, n):
                if nums[i] + nums[j] == target:
                    return [i, j]

        return []


def runTest():
    solution = Solution()

    # Test case 1
    nums = [2, 7, 11, 15]
    target = 9
    result = solution.twoSum(nums, target)
    print(f"Test case 1: nums = {nums}, target = {target}, result = {result}")

    # Test case 2
    nums = [3, 2, 4]
    target = 6
    result = solution.twoSum(nums, target)
    print(f"Test case 2: nums = {nums}, target = {target}, result = {result}")

    # Test case 3
    nums = [3, 3]
    target = 6
    result = solution.twoSum(nums, target)
    print(f"Test case 3: nums = {nums}, target = {target}, result = {result}")

runTest()
