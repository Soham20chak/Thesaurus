class Solution {
public:
    int balancedStringSplit(string s) {
        int cr=0,cl=0;
        int n=s.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='R')
                cr++;
            else if(s[i]=='L')
                cl++;
            if(cl==cr){
                c++;
            }
        }
        return c;
    }
};
