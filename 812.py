class Solution:
    def largestTriangleArea(self, points):
        """
        :type points: List[List[int]]
        :rtype: float
        """
        max=0
        for i in range(len(points)-2):
            for j in range(i,len(points)-1):
                for k in range(j,len(points)):
                    l1=math.sqrt(((points[i][0]-points[j][0])**2+(points[i][1]-points[j][1])**2))
                    l2=math.sqrt(((points[i][0]-points[k][0])**2+(points[i][1]-points[k][1])**2))
                    l3=math.sqrt(((points[j][0]-points[k][0])**2+(points[j][1]-points[k][1])**2))
                    s=(l1+l2+l3)/2
                    if s-l1>0 and s-l2>0 and s-l3>0:   
                        area=((s*(s-l1)*(s-l2)*(s-l3))**0.5)
                        if max<area:
                            max=area
        return max
                    
class Solution:
    def largestTriangleArea(self, points):
        """
        :type points: List[List[int]]
        :rtype: float
        """
        max=0
        for i in range(len(points)-2):
            for j in range(i,len(points)-1):
                for k in range(j,len(points)):
                    area=(max(abs(points[i][0]-points[j][0]),abs(points[i][0]-points[k][0]))*max((points[i][1]-points[j][1]),(points[i][1]-points[k][1]))-0.5*(abs((points[i][0]-points[j][0])*(points[i][1]-points[j][1]))+abs((points[k][0]-points[j][0])*(points[k][1]-points[j][1]))+abs((points[i][0]-points[k][0])*(points[i][1]-points[k][1]))))
        return max
                    