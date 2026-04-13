class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int st = 0 , end = 1;
        int maxBuy = 0;

        while( end < prices.size()){
            if(prices[st] < prices[end]){
                int profit = prices[end] - prices[st];
                maxBuy = max(maxBuy,profit);
            } else {
                st = end;
            }
            end ++;
        }
        return maxBuy;
        
    }
};
