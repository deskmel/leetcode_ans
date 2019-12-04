/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        int *queue,head=0,tail=0;
        int *step;
        bool *find;
        queue=new int[nums.size()];
        step=new int [nums.size()];
        find=new bool [nums.size()];
        for (int i=0;i<nums.size();i++) find[i]=false;
        queue[tail++]=0;
        step[0]=0;
        if (nums.size()==1) return 0;
        while (head!=tail)
        {
            int index=queue[head++];
            int dis=nums[index];
            if (index+dis>=nums.size()-1) return step[index]+1;
            for (int i=1;i<=dis;i++){
                if (not find[index+i]){
                    find[index+i]=true;
                    queue[tail++]=index+i;
                    step[index+i]=step[index]+1;
                    if ((index+i)+nums[index+i] >=nums.size()-1) return step[index+i]+1;
                }
            }
        }
        return 0;
    }
};
// @lc code=end

