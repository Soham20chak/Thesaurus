class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        if(nums.empty())
            return ans;
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        //start the 2 loops
        for(int i=0;i<n;i++){
            long long int t=target-nums[i];
            for(int j=i+1;j<n;j++){
                long long int sum = t-nums[j];
                int left = j+1;
                int right = n-1;
                while(left<right){
                    int twosum=nums[left]+nums[right];
                    if(twosum < sum) left++;
                    else if(twosum > sum) right--;
                    else{
                        vector<int>a(4,0);
                        a[0]=nums[i];
                        a[1]=nums[j];
                        a[2]=nums[left];
                        a[3]=nums[right];
                        ans.push_back(a);
                        
                        //processing the duplicates of number 3
                        while(left<right && nums[left]==a[2]) ++left;
                        //processing the duplicates of number 4
                        while(right>left && nums[right]==a[3]) --right;
                        
                    }
                }
                //processing the duplicates of number 2
                while(j+1<n && nums[j+1]==nums[j]) ++j;
            }
            //processing the duplicates of number 1
                while(i+1<n && nums[i+1]==nums[i]) ++i;
            
        }
        return ans;
        
    }
};
