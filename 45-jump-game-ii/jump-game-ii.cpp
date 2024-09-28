#include<bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    int jump(vector<int>& nums) {
        
        int l=0,r=0;
        int steps=0;
        
        if (nums.size()==1) return 0;
        
        while (r<nums.size()-1){  
            int MAX=0;
            for (int i=l;i<=r;i++)
            {
                MAX = max(MAX,i+nums[i]);
            }
            l=r+1;
            r=MAX;
            steps++; 
        }
        return steps;
    }
};