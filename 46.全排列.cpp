/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
public:

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        if (nums.size()==1){
            result.push_back(nums);
            return result;
        }
        for (int i=0;i<nums.size();i++){
            vector<int> z(nums);
            z.erase(z.begin()+i);
            vector<vector<int>> res = this->permute(z);
            for (int j=0;j<res.size();j++){
                res[j].insert(res[j].begin(),nums[i]);
            }
            result.insert(result.end(),res.begin(),res.end());
        }
        return result;
    }
};
// @lc code=end

