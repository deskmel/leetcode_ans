/*
 * @lc app=leetcode.cn id=43 lang=cpp
 *
 * [43] 字符串相乘
 */

// @lc code=start
class Solution {
public:

    string multiply(string num1, string num2) {
        string res;
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());

        res.assign(num1.size()+num2.size()+1,'0');
        for (int i=0;i<num1.size();i++){
            int num = num1[i]-'0';
            int k=0;
            string tmp;
            tmp.assign(num2.size(),'0');
            for (int j=0;j<num2.size();j++){
                tmp[j]+=(num*(num2[j]-'0')+k)%10;
                k=(num*(num2[j]-'0')+k)/10;
            }
            if (k!=0) tmp.push_back('0'+k);
            k=0;
            for (int j=0;j<tmp.size();j++){
                int pro = res[j+i]-'0'+tmp[j]-'0'+k;
                res[j+i]= '0'+pro%10;
                k=pro/10;
            }
            int index = tmp.size()+i;
            while (k!=0){
                int sum =  res[index]-'0'+k;
                res[index]=sum%10+'0';
                k=sum/10;
                index++;
            }
        }
    
    reverse(res.begin(),res.end());
    while(res[0]=='0' && res.size()!=1) res.erase(res.begin());
    return res;
    }
};
// @lc code=end

