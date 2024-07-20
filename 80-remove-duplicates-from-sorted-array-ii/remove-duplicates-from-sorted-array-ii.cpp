class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=0,j=0,cnt=1;
        
        
        while(i<nums.size()){
            cnt=1;
            while(i+1<nums.size() && nums[i] == nums[i+1]){
                cnt++;
                i++;
            }
        
        if(cnt>=2){
            nums[j++]=nums[i];
            nums[j++]=nums[i];
            i++;
        }
        else{
            nums[j++]=nums[i++];
        }
            
            
        }
            
            
            
        
        
        return j;
       
        
    }
};