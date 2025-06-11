class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        for(int i=1; i<n;i++){
            if(nums[i]<nums[i-1]){
                count++; // it checks whether it it rotaed sorted arr 
            }
        }
        if(nums[n-1]>nums[0]){
            count++; //for rotated to check the last ele should not be greater than first
        }
        return count<=1;
    }
};