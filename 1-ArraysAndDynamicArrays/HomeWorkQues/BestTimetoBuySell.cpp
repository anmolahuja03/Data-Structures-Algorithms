class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // Edgecases - Short sell not allowed --> which means we need
        // to buy first and then sell. At most one transaction (Buy, Sell)
        
        int n=prices.size();
        
        // Computing prefix min till i
        
        int pmin[n+1];
        pmin[0] = prices[0];
        for(int i=1; i<n; i++)           
            pmin[i] = min(pmin[i-1], prices[i]);
        
        int profit = 0;
        for(int i=1; i<n; i++){
            int newprofit = prices[i] - pmin[i-1];
            profit = max(profit, newprofit);
        }        
        return profit;
    }  
};