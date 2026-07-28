class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size()-1;
        int left=0,profit=0,maxprofit=0;
        for(int right=0;right<=n;right++){
            profit=prices[right]-prices[left];
            if(profit<0){
                left=right;
            }
            maxprofit=max(profit,maxprofit);

        }
        return maxprofit;
    }
};
