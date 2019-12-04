/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==0) return "";
        int index=0;
        auto minsize=strs[0].length();
        char a[1000]="";
        for (int i=0;i<strs.size();i++) minsize=min(minsize,strs[i].length());
        while (index<minsize){
            bool flag=true;
            for (int i=1;i<strs.size();i++){
                flag = flag & (strs[i][index] == strs[0][index]);
                if (not flag) break;
            }
            if (not flag) break;
            a[index]=strs[0][index];
            index+=1;
        }
        a[index+1]='\0';
        return a;
        
    }
};
// @lc code=end

