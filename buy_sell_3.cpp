class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dp[prices.size()];
        for(int i=0;i<prices.size();i++){
            dp[i]=0;
        }
        int mini=prices[0];
        int maxi=prices[prices.size()-1];
        for(int i=prices.size()-2;i>=0;i--){
            if(prices[i]>maxi) maxi=prices[i];
            dp[i]=max(dp[i+1],maxi-prices[i]);
        }
        for(int i=1;i<prices.size();i++){
            if(prices[i]<mini) mini=prices[i];
            dp[i]=max(dp[i-1],dp[i]+prices[i]-mini);
        }
        return dp[prices.size()-1];
        
    }
};
