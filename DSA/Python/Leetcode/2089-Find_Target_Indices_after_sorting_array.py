#  link: https://leetcode.com/problems/find-target-indices-after-sorting-array/description/
class Solution(object):
    def targetIndices(self, nums, target):
        nums.sort()
        
        if target not in nums:
            return []  
        
        first_index = nums.index(target)
        cnt = nums.count(target)
        last_index = first_index + cnt
        indices = [i for i in range(first_index, last_index)]
        return indices


# Test cases
def run_tests():
    solution = Solution()

    # Test case 1
    nums1 = [1, 2, 5, 2, 3, 4, 2]
    target1 = 2
    print(f"Test case 1: {solution.targetIndices(nums1, target1)}")  # Expected: [1, 2, 3]

    # Test case 2
    nums2 = [1, 2, 3, 4, 5]
    target2 = 3
    print(f"Test case 2: {solution.targetIndices(nums2, target2)}")  # Expected: [2]

    # Test case 3
    nums3 = [5, 5, 5, 5, 5]
    target3 = 5
    print(f"Test case 3: {solution.targetIndices(nums3, target3)}")  # Expected: [0, 1, 2, 3, 4]

    # Test case 4
    nums4 = [1, 3, 4, 5, 6]
    target4 = 2
    print(f"Test case 4: {solution.targetIndices(nums4, target4)}")  # Expected: []

    # Test case 5
    nums5 = [7, 8, 9, 10, 10, 10, 11]
    target5 = 10
    print(f"Test case 5: {solution.targetIndices(nums5, target5)}")  # Expected: [3, 4, 5]

run_tests()
