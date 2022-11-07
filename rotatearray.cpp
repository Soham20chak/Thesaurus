class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reeverse(nums,0,nums.size()-k-1);
        reeverse(nums,nums.size()-k,nums.size()-1);
        reeverse(nums,0,nums.size()-1);
        
}
    
    void reeverse(vector<int>& nums,int start,int end){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
}
    }
    
    
    
};
