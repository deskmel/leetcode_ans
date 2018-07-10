class Solution:
    def findIntegers(self, num):
        """
        :type num: int
        :rtype: int
        """
        li=[1]*num
        n=3
        while n<num:
            k=1
            while k*n<num:
                li[k*n]=0
                k+=1
            n=n*2+1
        return sum(li)+1
a=Solution()
print(a.findIntegers(5))