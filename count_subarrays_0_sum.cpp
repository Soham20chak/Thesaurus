class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int , int>umap;
        int count = 0 ;
        for(int i=0;i<n;i++){
            int x = arr[i];
            if(umap.find(k-arr[i])!=umap.end()){
                count+=umap[k-arr[i]];
                umap[arr[i]]++;
            }
            else{
                umap[arr[i]]++;
            }
        }
        return count;
    }
};
