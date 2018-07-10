class Solution(object):
    def maxDistToClosest(self, seats):
        """
        :type seats: List[int]
        :rtype: int
        """
        total=0
        flag_first=True
        flag_second=True
        li=[]
        for i in seats:
            if i==0:
                total+=1
            elif i==1:
                li.append(total)
                total=0
        li.append(total)
        for i in range(1,len(li)-1):
            li[i]=li[i]-li[i]//2
        print(li)
a=Solution()
a.maxDistToClosest([1,0,0,0,1,0,1])