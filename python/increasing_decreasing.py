class Solution(object):
    def isMonotonic(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        count = 0
        for i in range(len(nums) - 1):
            if nums[i] <= nums[i + 1]:
                count += 1
        if count == len(nums) - 1:
            return True

        count = 0  
        for i in range(len(nums) - 1):
            if nums[i] >= nums[i + 1]:
                count += 1
        if count == len(nums) - 1:
            return True

        return False


