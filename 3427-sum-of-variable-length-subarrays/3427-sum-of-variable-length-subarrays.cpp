class Solution {
public:
    int subarraySum(vector<int>& nums) {
         long long totalSum = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            int start = max(0, i - nums[i]);
            // Sum all elements from 'start' to 'i' for each index
            for (int j = start; j <= i; ++j) {
                totalSum += nums[j];
            }
        }
        
        return totalSum;
    }
};