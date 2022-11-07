class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>q;
        int i=0,j=0;
        int n=nums.size();
        while(j<n){
            //popping any element smaller than the element in its left as it can never contribute to the ans 
            while(q.size()>0 && nums[j]>q.back()){
                q.pop_back();
            }
            q.push_back(nums[j]);
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                ans.push_back(q.front());
                if(q.front()==nums[i]){
                    q.pop_front();
                }
                i++;
                j++;
            }
            
        }
        return ans;
    }
};
