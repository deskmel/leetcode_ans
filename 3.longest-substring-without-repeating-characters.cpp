/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:

    int lengthOfLongestSubstring(string s) {
        const int maxn=1000;
        bool find[maxn];
        int begin[maxn];
        for (int i=0;i<maxn;i++) find[i]=false;
        int count=0;
        int maxcount=0;
        int index=0;
        int be=0;
        for (auto &a:s){
            if (find[a-' ']){
                maxcount=max(count,maxcount);
                for (int i=be;i<begin[a-' '];i++){
                    find[s[i]-' ']=false;
                }
                be = begin[a-' ']+1;
                count = index-be+1;
            }
            else{
                find[a-' ']=true;
                count+=1;
            }
            begin[a-' ']=index;
            index+=1;
        }
        maxcount=max(maxcount,count);
        return maxcount;  
    }
};
// @lc code=end

