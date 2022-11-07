class Solution {
public:
    vector<int> sumZero(int n) {
        int beg=1;
        vector<int>res;
        while(n>=2){
            res.push_back(beg);
            res.push_back(-beg);
            beg++;
            n-=2;
        }
        if(n==1){
            res.push_back(0);
        }
        return res;
    }
};
