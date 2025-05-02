class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        long long prod = 1 ;
        vector<int> ans;
        int zeros = 0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeros++;
                continue;
            }
            prod *= nums[i];
        }

        for (int i=0;i<nums.size();i++){
            if(nums[i] && !zeros)
                ans.push_back(prod/nums[i]);
            else if(zeros == 1 && nums[i]==0 )
                ans.push_back(prod);
            else 
                ans.push_back(0);
        }

        return ans;

    }
};