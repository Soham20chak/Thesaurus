class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    
    static bool comp(pair<int,int> a,pair<int,int> b){
        if(a.second==b.second)
            return a.first<b.first;
        return a.second<b.second;
    }
    
    
    
    
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            v[i]={start[i],end[i]};
        }
        sort(v.begin(),v.end(),comp);
        int i=0,j=1;
        int count=1;
        while(j<n){
            if(v[i].second<v[j].first){
                count++;
                i=j;
                j++;
            }
            else{
                j++;
            }
                
        }
        return count;
        
        
    }
};
