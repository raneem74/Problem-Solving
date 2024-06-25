#include <algorithm> 

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans = nums.size();
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i]==val)
            {
                nums[i]=0;
                ans--;
            }
        }
        
        std::sort(nums.begin(), nums.end(), std::greater<int>());
        return ans;
    
}
};