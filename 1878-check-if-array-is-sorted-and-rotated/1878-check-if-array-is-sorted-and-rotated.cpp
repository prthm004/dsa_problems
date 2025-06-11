class Solution {
public:
    bool check(vector<int>& nums) {
        int check_count=0; 
        for(int i=0;i<nums.size();i++){
            if (nums[i]>nums[(i+1)%nums.size()]) {
                check_count+=1;

            }
            if (check_count>1){
            return false;
        }
        }return true;
        
        
        
    }
};