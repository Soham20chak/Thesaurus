//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int maxi=0;
        int sum=0;
        unordered_map<int ,int> umap;
        for(int i=0;i<n;i++){
            int length=0;
            sum+=A[i];
            if(sum==0){
                maxi=i+1;
            }
            
            else if(umap.find(sum)!=umap.end()){
                maxi=max(maxi,i - umap[sum]);
            }
            else{
                umap[sum]=i;
            }
            
            
            
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends
