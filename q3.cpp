class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_so_far=prices[0];
        int maxprofit=INT_MIN;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            min_so_far=min(min_so_far,prices[i]);
            profit=prices[i]-min_so_far;
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
    }
};