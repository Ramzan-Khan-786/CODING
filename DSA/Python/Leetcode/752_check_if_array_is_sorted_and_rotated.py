# link: 

class Solution(object):
    def check(self, nums):
        count = 0
        n = len(nums)

        for i in range(1, n):
            if nums[i - 1] > nums[i]:
                count += 1

        if nums[n - 1] > nums[0]:
            count += 1

        return count <= 1

    def run_test(self):
        # Test case 1: Rotated sorted array
        print(self.check([3, 4, 5, 1, 2]))  # Expected: True (This is a rotated sorted array)

        # Test case 2: Not a rotated sorted array
        print(self.check([2, 1, 3, 4, 5]))  # Expected: False (The array is not sorted or rotated)

        # Test case 3: Already sorted array (no rotation)
        print(self.check([1, 2, 3, 4, 5]))  # Expected: True (This is a sorted array, no rotation)

        # Test case 4: Single element array
        print(self.check([1]))  # Expected: True (Single element array is trivially sorted)

# Create an instance of Solution and run the tests
solution = Solution()
solution.run_test()
