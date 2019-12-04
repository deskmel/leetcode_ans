/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int weight=0,left=0,right=height.size()-1;
        while (left<right){
            if (height[left]<height[right]){
                weight=max(weight,height[left]*(right-left));
                left+=1;
            }
            else {
                weight=max(weight,height[right]*(right-left));
                right-=1;
            }
        }
        return weight;
        
    }
};
// @lc code=end

