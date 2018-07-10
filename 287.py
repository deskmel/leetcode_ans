class Solution:
    def findDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        dict={}
        for i in nums:
            if i not in dict:
                dict[i]=0
            else:
                return i

#要求 时间复杂度O(nlnn)
#不可改动数组
#使用O(1)空间
class Solution:
    def findDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums: return 
        size = len(nums)
        l = 1
        r = size - 1
        mid = (l+r)//2
        while l<r:
            count = 0
            for i in nums:
                if i<=mid:
                    count += 1
            if count<=mid:
                l = mid+1
            else:
                r = mid
            mid = (l+r)//2
        return l
#牛逼上天法
#映射找环法
class 