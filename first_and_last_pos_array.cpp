class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans={-1,-1};
        ans[0]=FindTarget(nums,target,true);
        ans[1]=FindTarget(nums,target,false);
        return ans;
        
        
    }
    
    
    int FindTarget(vector<int>&nums , int target , bool startindex){
        int n= nums.size();
        int start=0;
        int end = n-1;
        int ans =-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]>target){
                end=mid-1;
                
            }
            else if (nums[mid]<target){
                start=mid+1;
            }
            else {
                ans=mid;
                if(startindex==true){
                    end=mid-1;
                }
                else {
                    start=mid+1;
                }
            }
        }
        return ans ;
    }
};
