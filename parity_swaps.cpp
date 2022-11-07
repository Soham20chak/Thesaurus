class Solution {
public:
    
    static bool compare(int a , int b){
        return (a>b) ;
    }
    
    
    int largestInteger(int num) {
        int ans,digit;
        vector<int>odd;
        vector<int>even;
        vector<int>odd_ind;
        vector<int>even_ind;
        string s = to_string(num);
        int n = s.size();
        for(int i=0;i<n;i++){
            digit=stoi(s.substr(i,1));
            if(digit%2==0){
                even.push_back(digit);
                even_ind.push_back(i);
                
            }
            else{
                odd.push_back(digit);
                odd_ind.push_back(i);
            }
        }
        sort(even.begin(),even.end(),compare);
        sort(odd.begin(),odd.end(),compare);
        
        vector<char>solution(n);
        for(int i=0;i<odd_ind.size();i++){
            char c = (char)(odd[i]+(int)('0'));
            solution[odd_ind[i]]=c;
        }
        for(int i=0;i<even_ind.size();i++){
            char c = (char)(even[i]+(int)('0'));
            solution[even_ind[i]]=c;
        }
        
        string f;
        for(int i=0;i<solution.size();i++){
            f+=solution[i];
        }
        ans=stoi(f);
        return ans;
        
        
    }
};
