/*
 * @lc app=leetcode.cn id=10 lang=cpp
 *
 * [10] 正则表达式匹配
 */

// @lc code=start
class Solution {
public:
    //backtrace
    bool isMatch(string s, string p) {
        bool match[1005][1005];
        match[s.length()][p.length()]=true;
        for (int i=0;i<s.length();i++) match[i][p.length()]=false;
        for (int i=0;i<p.length();i++) match[s.length()][i]=false;
        if (p[p.length()-1]=='*') match[s.length()][p.length()-2]=true;
        for (int i=s.length();i>=0;i--){
            for (int j=p.length();j>=0;j--){
                if (i==s.length()||j==p.length()){
                    if (i==s.length()&&j==p.length()) match[i][j]=true;
                    else if (i==s.length()){
                        if (p[j+1]=='*')
                        match[i][j]=match[i][j+2];
                    }
                    else match[i][j]=false;
                }
                else
                {
                    if (p[j]=='.' && p[j+1]!='*'){
                        match[i][j]=match[i+1][j+1];
                    }
                    else if (p[j+1]=='*'){
                        char t0=p[j];
                        char t1=s[i];

                        match[i][j]=match[i][j+2];
                        int index=1;
                        if (t0=='.'){
                            while ((i+index)<=s.length()){
                                match[i][j]=match[i][j] | match[i+index][j+2];
                                index++;
                            }
                        }
                        else{
                            while (t1==t0){
                                match[i][j]=match[i][j] | match[i+index][j+2];
                                index++;
                                t1=s[i+index-1];
                            }
                        }
                    }
                    else match[i][j]=(s[i]==p[j] & match[i+1][j+1]);   
                }
            }
        }
        return match[0][0];
    }
};
// @lc code=end

