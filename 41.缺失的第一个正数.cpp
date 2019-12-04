/*
 * @lc app=leetcode.cn id=41 lang=cpp
 *
 * [41] 缺失的第一个正数
 */

// @lc code=start
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    int index=0;
    while (index<nums.size()){
        if (nums[index]<=0) nums.erase(nums.begin()+index);
        else index++;
    }
    int tmp,q = nums[0],l=1;
    for (int i=1;i<nums.size();i++){
        if (nums[i]<q){
            tmp = nums[l];
            nums[l]=nums[i];
            nums[i]=tmp;
            l++;
        }
    }
    if ()
    }
};
// @lc code=end

