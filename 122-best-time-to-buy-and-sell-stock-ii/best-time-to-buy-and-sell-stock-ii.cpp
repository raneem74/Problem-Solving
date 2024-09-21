class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int sum=0;
        int buy=prices[0];
        for (int i=0;i<prices.size()-1;i++){
            
            if (prices[i+1]<prices[i]){
                sum+=prices[i]-buy;
                buy=prices[i+1];                 
            }
            else{
                sum+=prices[i+1]-prices[i];
                buy=prices[i+1];
            }
            
        }
        return sum;
        
    }
};