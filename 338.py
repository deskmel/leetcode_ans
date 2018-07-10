class Solution:
    def countBits(self, num):
        """
        :type num: int
        :rtype: List[int]
        """
        d = [0 for i in range(num+1)]
        
        i = 0
        while((1<<i) < num):
            l = 1<<i
            k = l
            r = min(num,(1<<(i+1))-1)
            while(k <= r):
                d[k] = d[k-l]+1
                k += 1
            i += 1
        if(num == (1<<i)):
            d[num] = 1
        return(d)