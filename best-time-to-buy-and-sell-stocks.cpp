class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int lowestPoint = prices[0];
        int maxProfit = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < lowestPoint){
                lowestPoint = prices[i];
            }else{
                maxProfit = max(maxProfit, prices[i] - lowestPoint);
            }
        }
        return maxProfit;
    }
};