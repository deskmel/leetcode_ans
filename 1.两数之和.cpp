/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> item;
        for (int i=0;i<nums.size()-1;i++){
            for (int j=i+1;j<nums.size();j++){
                if ((nums[i]+nums[j])==target){
                    item.push_back(i);
                    item.push_back(j);
                    return item;
                }
            }
        }
        return item;
    }
};
// @lc code=end

