class Solution {
public:
    int reverse(int x) {
        const int INF=0x7fffffff;
        const int NEINF=0x80000000;
        int k=0;
        if (x<0){
            if (x==NEINF) return 0;
            x=-x;
            while (x!=0){
                if (k>(INF/10)) return 0;
                k*=10;
                if (k>(INF-x%10)) return 0;
                k+=x%10;
                x/=10;
            }
            return -k;
        }
        else{
            while (x!=0){
                if (k>(INF/10)) return 0;
                k*=10;
                if (k>(INF-x%10)) return 0;
                k+=x%10;
                x/=10;
            }
            return k;
        }
    }
};