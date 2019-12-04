/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        if (nums.size()==1){
            result.push_back(nums);
            return result;
        }
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size();i++){
            if (i>0 && nums[i]==nums[i-1]) continue;
            vector<int> z(nums);
            z.erase(z.begin()+i);
            vector<vector<int>> res = this->permuteUnique(z);
            for (int j=0;j<res.size();j++){
                res[j].insert(res[j].begin(),nums[i]);
            }
            result.insert(result.end(),res.begin(),res.end());
        }
        return result;
    }
};
// @lc code=end

