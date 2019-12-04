/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        char rightPair[3] = {'(','[','{'};
        char stack[10000];
        int top=0;
        char choice;
        for (int i=0;i<s.length();i++){
            if (s[i]=='(' || s[i] == '[' || s[i] == '{') stack[top++]=s[i];
            else {
                switch (s[i])
                {
                    case ')': choice = rightPair[0]; break;
                    case ']': choice = rightPair[1]; break;
                    case '}': choice = rightPair[2]; break;
                }
                if (top==0 || stack[top-1]!=choice) return false;
                else top--;
            }
        }
        return top==0;
    }
};
// @lc code=end

