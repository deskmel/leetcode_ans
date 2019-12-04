/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string str) {
        const int INF=0x7fffffff;
        const int NEINF=0x80000000;
        int res=0;
        char s;
        int i;
        for (i=0;i<str.length();i++){
            if (str[i]==' ') continue;
            else break;
        }
        if (i==str.length() || !(str[i]=='-' || str[i]=='+' || (str[i]-'0'>=0 && str[i]-'9'<=0))){
            return res;
        }
        else{
            if (str[i]=='-'){
                i+=1;
                while ((str[i]-'0'>=0 && str[i]-'9'<=0)){
                    if (res<NEINF/10) return NEINF;
                    res*=10;
                    if (res<NEINF+(str[i]-'0')) return NEINF;
                    res-=(str[i]-'0');
                    i+=1;
                }
                return res;
            }
            else {
                if (str[i]=='+') i+=1;
                while ((str[i]-'0'>=0 && str[i]-'9'<=0)){
                    if (res > INF/10) return INF;
                    res*=10;
                    if (res> INF-(str[i]-'0')) return INF;
                    res+=(str[i]-'0');
                    i+=1;
                }
                return res;


            }
        }


        
    }
};
// @lc code=end

