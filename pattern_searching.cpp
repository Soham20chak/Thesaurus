
bool searchPattern(string str, string pat)
{
    int n=str.size();
    int m=pat.size();
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(str[i+j]!=pat[j])
                break;
        }
        if(j==m){
            return true;
        }
    }
    return false;
}
