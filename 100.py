class Solution:
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        if (p==None or q==None):
            if p==q:
                return True
            else:
                return False
        return (p.val==q.val and self.isSameTree(p.right,q.right) and self.isSameTree(q.left,p.left))
    