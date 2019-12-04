/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */

// @lc code=start
class Solution {
public:
    bool existThreeSum(vector<int>& nums,int target){
        //sb算法 O(n^3)
        for (int i=0;i<nums.size();i++){
            int fix = nums[i];
            int l=i+1,r=nums.size()-1;
            while (l<r){
                if (fix+nums[l]+nums[r]==target){
                    return true;
                }
                else if (fix+nums[l]+nums[r]<target) l++;
                else r--;
            }          
        }
        return false;
    }
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        if (nums.size()<3 ) return {};
        int max_size = nums.size()-1;
        int l=0,r=min(abs(nums[0]+nums[1]+nums[2]-target),abs(nums[max_size]+nums[max_size-1]+nums[max_size-2]-target));
        for (int i=0;i<=r;i++){
            if (existThreeSum(nums,target+i)) return target+i;
            if (existThreeSum(nums,target-i)) return target-i;
        }
        return r;
    }
};
// @lc code=end

