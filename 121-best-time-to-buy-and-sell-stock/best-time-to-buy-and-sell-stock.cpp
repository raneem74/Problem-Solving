class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max =0;
        int buy =1e5;
        
        for (int i=0;i<prices.size();i++){
            if (prices[i]< buy)
                buy = prices[i];
            max = std::max(max, prices[i]-buy);
        }
        
        return max;
        
    }
};