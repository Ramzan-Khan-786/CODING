# link: https://leetcode.com/problems/sort-an-array/
class Solution(object):
    def sortArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        return sorted(nums)  # No need to slice the list, just sort it

def run_test():
    solution = Solution()

    # Test case 1
    nums1 = [5, 2, 9, 1, 5, 6]
    print(f"Sorted Array: {solution.sortArray(nums1)}")  # Expected: [1, 2, 5, 5, 6, 9]

    # Test case 2
    nums2 = [3, 3, 3, 3]
    print(f"Sorted Array: {solution.sortArray(nums2)}")  # Expected: [3, 3, 3, 3]

    # Test case 3
    nums3 = [10, 50, 20, 30]
    print(f"Sorted Array: {solution.sortArray(nums3)}")  # Expected: [10, 20, 30, 50]

run_test()
