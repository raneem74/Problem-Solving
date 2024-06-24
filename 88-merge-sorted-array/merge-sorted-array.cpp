#include <map>

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        map<int,int> placeMap;
        vector<int> nums1Copy  ;
        for (int i=0; i<m; i++)  
        nums1Copy.push_back(nums1[i]);  
        
        int i =0;
        int j=0;
        int k=0;
        while (i< m || j < n ){ 
            
            // cout<<"nums1Copy[i]"<<nums1Copy[i]<<endl;
            // cout<<"nums2[j]"<<nums2[j]<<endl;
            if (i>=m){
                 nums1[k] = nums2[j];
                j++;k++;
                // cout<<"case1"<<endl;
                continue;
            }
            
            if (j>=n){
                nums1[k] = nums1Copy[i];
                i++;
                k++;
                // cout<<"case2"<<endl;
                continue;
            }
            
            if (nums1Copy[i] < nums2[j] )
            {
                nums1[k] = nums1Copy[i];
                i++;
                k++;
                // cout<<"case3"<<endl;
                
            }
            else{
                nums1[k] = nums2[j];
                j++;k++;
                // cout<<"case4"<<endl;
                
            }
            
            // cout<<"nums1[k]"<<nums1[k-1]<<endl;
        }
        
        
    }
};