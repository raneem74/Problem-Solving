class Solution {
public:
    bool canJump(vector<int>& nums) {

        int steps_needded = 1;
        int p=nums.size()-1;

        for (int i=nums.size()-1;i>0;i--){

            if (nums[i-1] >= steps_needded ){
                p=i-1;
                steps_needded = 1;
            }
            else {
                steps_needded++;
            }
        }
        
        return p == 0 ;
        
    }
};