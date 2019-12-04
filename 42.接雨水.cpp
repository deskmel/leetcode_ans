/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size()==0) return 0;
        int n=height.size();
        int maxx=0,maxi=0;
        for (int i=0;i<n;i++)
        {
            if (height[i]>maxx)
            {maxx=height[i],maxi=i;}
        }
        int sum=0,highest=0,s=0;
        for (int i=0;i<=maxi;i++)
        {
            if (height[i]>=highest)
                {highest=height[i];sum+=s;s=0;}
            else
                s+=highest-height[i];
        }
        highest=0;
        for (int i=n-1;i>=maxi;i--)
        {
            if (height[i]>=highest)
                {highest=height[i];sum+=s;s=0;}
            else
                s+=highest-height[i];
        }
        return sum;
    }
};
// @lc code=end

