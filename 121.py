class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if len(prices)==0:
            return 0
        li=[]
        for i in range(len(prices)-1):
            li.append(prices[i+1]-prices[i])
        total=self.maxsubarray(li,len(li)-1,0)    
        return max(total,0)
    def maxsubarray(self,li,high,low):
        if high<low:
            return 0
        if high==low:
            return li[low] 
        mid=(high+low)//2
        left_sum=self.maxsubarray(li,mid,0)
        right_sum=self.maxsubarray(li,high,mid+1)
        cross_sum=self.maxcrossarray(li,high,mid,low)
        return max(left_sum,right_sum,cross_sum)
    def maxcrossarray(self,li,high,mid,low):
        left_sum=li[mid]
        sum1=0
        for i in range(high-mid+1):
            sum1+=li[mid+i]
            if sum1>left_sum:
                left_sum=sum1
        sum1=0
        right_sum=0
        for j in range(mid-low):
            sum1+=li[mid-1-j]
            if sum1>right_sum:
                right_sum=sum1
        return left_sum+right_sum
#Best answer
class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if len(prices)==0:
            return 0
        li=[]
        for i in range(len(prices)-1):
            li.append(prices[i+1]-prices[i])
        res=0
        sum1=0
        for i in li:
            sum1=max(sum1+i,i)
            res=max(res,sum1)
        return res