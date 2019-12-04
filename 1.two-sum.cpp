/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for (int &a:nums){
            res.push(target-a);
        }
        
    }
};
// @lc code=end

