class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Edge case

        int index = 1; // Start from 1 because the first element is always unique

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[index] = nums[i]; // Overwrite duplicate
                index++;
            }
        }

        return index; // Number of unique elements
    }
};
