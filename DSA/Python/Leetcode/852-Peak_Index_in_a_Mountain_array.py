# 852. Peak Index in a Mountain Array
# link: https://leetcode.com/problems/peak-index-in-a-mountain-array/
class Solution(object):
    def peakIndexInMountainArray(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        return arr.index(max(arr))


def runTest():
    solution = Solution()

    # Test case 1
    arr = [0, 2, 3, 4, 5, 3, 1, 0]
    result = solution.peakIndexInMountainArray(arr)
    print(f"Test case 1: arr = {arr}, peak index = {result}")

    # Test case 2
    arr = [0, 1, 0]
    result = solution.peakIndexInMountainArray(arr)
    print(f"Test case 2: arr = {arr}, peak index = {result}")

    # Test case 3
    arr = [0, 2, 4, 5, 3, 1]
    result = solution.peakIndexInMountainArray(arr)
    print(f"Test case 3: arr = {arr}, peak index = {result}")


runTest()
