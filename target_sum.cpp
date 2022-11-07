class Solution {
public:
     int findTargetSumWays(vector<int>& nums, int target) {
         int range=0;
        for(int i=0;i<nums.size();i++)
            range+=nums[i];
        if(range<target || (range+target)%2!=0)
            return 0;
        int subset=(abs(target)+range)/2;
        int t[nums.size()+1][subset+1];
        for(int i=0;i<nums.size()+1;i++)
        {
            for(int j=0;j<subset+1;j++)
            {
                if(i==0)
                    t[i][j]=0;
                if(j==0)
                    t[i][j]=1;
            }
        }
        for(int i=1;i<nums.size()+1;i++)
        {
            for(int j=0;j<subset+1;j++)
            {
                if(nums[i-1]<=j)
                t[i][j]=t[i-1][j-nums[i-1]]+t[i-1][j];
                else
                t[i][j]=t[i-1][j];
            }
        }
        return t[nums.size()][subset];
   }
    
};
