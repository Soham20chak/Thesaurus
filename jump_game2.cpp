class Solution {
public:
    int jump(vector<int>& nums) {
        int steps=0;
        int maximum = INT_MIN;
        int jumps=0;
        int n = nums.size();
        if(nums[0]==0 && n!=1) return -1;
        else if(n==1) return 0;
        for(int i=0;i<n-1;i++){
            maximum = max(maximum , nums[i]+i);
            if(i==steps){
                steps=maximum;
                jumps++;
            }
            
        }
        if(steps>=n-1){
                return jumps; 
            }
        return -1;
        
    }
};
