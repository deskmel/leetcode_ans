/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    static bool Comp(const vector<int> &a,const vector<int> &b)
    {
        return (a[0]>b[0] || (a[0]==b[0] && a[1]>b[1]) || (a[0]==b[0] && a[1]==b[1] && a[2]>b[2]));
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if (nums.size()<3) return res;
        //3 指针
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size()-2;i++){
            int fix = nums[i];
            if (fix>0)break;
            if (i>0 && fix==nums[i-1]) continue;
            int l=i+1,r=nums.size()-1;
            while (l<r){
                if (fix+nums[l]+nums[r]==0){
                    if (l==i+1 || r==nums.size()-1){
                        res.push_back({nums[i],nums[l],nums[r]});
                        l++;r--;
                    }
                    else if (l>i+1 && nums[l]==nums[l-1]) l++;
                    else if (r<nums.size()-1 && nums[r]==nums[r+1]) r--;
                    else{
                        res.push_back({nums[i],nums[l],nums[r]});
                        l++;r--;
                    }
                }
                else if (fix+nums[l]+nums[r]<0) l++;
                else r--;
            }          
        }
        return res;
    }
};
// @lc code=end
