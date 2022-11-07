class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                if(count>max_count)
                    max_count=count;
            }
            else{
                count=0;
            }
        }
        return max_count;
    }
};
