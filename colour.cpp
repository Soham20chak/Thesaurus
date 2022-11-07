public:
    void sortColors(vector<int>& nums) {
        int l=0,mid=0,r=nums.size()-1;
        while(mid<=r)
        {
            if(nums[mid]==1) mid++;
            else if(nums[mid]==0) 
            {
                swap(nums[mid],nums[l]);
                l++;mid++;
            }
            else 
            {
                swap(nums[mid],nums[r]);
                r--;           
            } 
        }
    }
};```
