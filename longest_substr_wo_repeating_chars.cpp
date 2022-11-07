class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;
        int i=0,j=0;
        unordered_map<char,int>umap;
        while(j<s.size()){
            umap[s[j]]++;
            if(umap.size()==j-i+1){
                maxi=max(maxi,j-i+1);
                j++;
            }
            //there are repeating characters
            else if(umap.size()<j-i+1){
                while(umap.size()<j-i+1){
                    umap[s[i]]--;
                    if(umap[s[i]]==0)
                        umap.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return maxi;
    }
};
