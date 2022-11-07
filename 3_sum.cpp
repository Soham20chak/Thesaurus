class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left,right;
        vector<vector<int>> ans;
        map<vector<int>, int> mp;
        vector<int> v;
        if(nums.size()<=2)
            return ans;
        for(int i=0;i<nums.size()-1;i++){
            left=i+1;
            right=nums.size()-1;
        while(left<right){
            int sum=nums[left]+nums[right]+nums[i];
            if(sum==0){
                v.clear();
                v.push_back(nums[i]);
                v.push_back(nums[left]);
                v.push_back(nums[right]);
                mp[v]++;
            }
            if(sum>0)
                right--;
            else
                left++;
        }
        }
        for(auto x:mp){
            ans.push_back(x.first);
        }
        return ans;
    }
};
