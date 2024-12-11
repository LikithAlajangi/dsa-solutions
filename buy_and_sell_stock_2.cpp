class Solution {
public:
    int maxProfit(vector<int>& prices) {
        

        int buy=prices[0];
        int profit = 0,sum=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy){
                buy = prices[i];
            }

           // profit = max(profit,prices[i]-buy);
            if(prices[i]-buy>profit){
                profit = prices[i]-buy;
                sum += profit;
                buy = prices[i];
                profit=0;
            }
        }
        return sum;
    }
};