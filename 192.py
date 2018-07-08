# Definition for an interval.
# class Interval(object):
#     def __init__(self, s=0, e=0):
#         self.start = s
#         self.end = e
def merge(a, b):
    c = []
    h = j = 0
    while j < len(a) and h < len(b):
        if a[j].start < b[h].start:
            c.append(a[j])
            j += 1
        else:
            c.append(b[h])
            h += 1

    if j == len(a):
        for i in b[h:]:
            c.append(i)
    else:
        for i in a[j:]:
            c.append(i)

    return c


def merge_sort(lists):
    if len(lists) <= 1:
        return lists
    middle = len(lists)/2
    left = merge_sort(lists[:middle])
    right = merge_sort(lists[middle:])
    return merge(left, right)




class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[Interval]
        :rtype: List[Interval]
        """
        if len(intervals)==0:
            return []
        li=[]
        merge_sort(intervals)
        min1=intervals[0].start
        max1=intervals[0].end
        
        for i in range(1,len(intervals)):
            if max1<intervals[i].start:
                a=Interval(min1,max1)
                li.append(a)
                min1=intervals[i].start
                max1=intervals[i].end
            else:
                max1=max(intervals[i].end,max1)
        li.append(Interval(min1,max1))
        return li
a=Solution()
print(a.merge())