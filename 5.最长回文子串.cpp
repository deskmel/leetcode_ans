/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
    int pa[1005][1005];
    string s;
public:
    
    int whetherpalidrome(int left,int right){
        if (this->pa[left][right]!=0) return this->pa[left][right];
        if (s[left]==s[right]){
            if (left == right || left==right-1) return 1;
            else return (this->pa[left][right]=this->whetherpalidrome(left+1,right-1));
        }
        else return -1;
    }
    string longestPalindrome(string s) {
        this->s=s;
        for (int i=0;i<s.length();i++){
            for (int j=0;j<s.length();j++){
                this->pa[i][j]=0;
            }
        }
        for (int len=s.length();len>=1;len--){
            for (int i=0;i<s.length()-len+1;i++){
                if (whetherpalidrome(i,i+len-1)==1) return s.substr(i,len);
            }
        }
        return "";
    }
};
// @lc code=end

