class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size(),c=matrix[0].size();
    vector<int>d1(r,-1);
    vector<int>d2(c,-1);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(matrix[i][j]==0){
                d1[i]=0;
                d2[j]=0;
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(d1[i]==0||d2[j]==0){
                matrix[i][j]=0;
            }
        }
    }
        
    }
};
