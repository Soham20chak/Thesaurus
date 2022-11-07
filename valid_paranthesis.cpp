class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' ){
                st.push(s[i]);
            }
            else{
                if(st.empty())
                    return false;
                char c = st.top();
                st.pop();
                if(s[i]==')' && c!='(' || s[i]=='}' && c!='{' || s[i]==']' && c!='[' )
                        return false;
            }
        }
        if(st.empty()){
            return true;
        }
        else 
            return false;
    }
};
