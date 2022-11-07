class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        //store the numbers with their freqs in the map
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        //ans vector 
        vector<int>ans;
        //vector pair to make the operations with the vector
        vector<pair<int,int>>v;
        //copy tyhe contents of the map into the vector 
        for(auto x:umap){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end(),comp);
        for(int i=0;i<v.size();i++){
            int it = v[i].second;
            for(int j=0;j<it;j++){
                ans.push_back(v[i].first);
            }
        }
        return ans;
        
        
    }
    
    static bool comp(pair<int,int>a,pair<int,int>b){
        if(a.second==b.second){
            return a.first>b.first;
        }
        return a.second<b.second;
    }
};
