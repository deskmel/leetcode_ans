class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        re=[[1]]
        li1=[1]
        for i in range(2,numRows+1):

            li1.append(0)
            print(li1)
            for j in range(len(li1)-1):
                li1[len(li1)-1-j]=li1[len(li1)-j-1]+li1[len(li1)-j-2]
            re.append([])
            re[i-1]=li1.copy()

            print(re)

            
        return re
print(Solution().generate(5))