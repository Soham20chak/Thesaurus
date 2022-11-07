class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int c=0;
        int j;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)==s.end()){
                j=nums[i];
            while(s.find(j)!=s.end())
                    j++;
            c=max(c,j-nums[i]);
        }
        }
        return c;
    }
};
