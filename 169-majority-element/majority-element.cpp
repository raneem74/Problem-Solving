class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int cnt=1;
        
        for (int i=0;i<nums.size();i++){
            
            if(i+1 < nums.size() && nums[i]==nums[i+1])
                cnt++;
            else 
                cnt=1;
            
            if(cnt > (nums.size()/2) )
                return nums[i];
    
        }
        
        return -1;
        
    }
};