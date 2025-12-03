class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        lastNonZero  = 0
        for i in range(len(nums)):
            if nums[i] != 0:
                nums[lastNonZero], nums[i] = nums[i], nums[lastNonZero]
                lastNonZero += 1