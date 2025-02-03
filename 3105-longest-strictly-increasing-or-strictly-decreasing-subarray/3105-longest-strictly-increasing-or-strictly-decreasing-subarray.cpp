class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int maxi=0;
        int inc=1,dec=1,longest=1;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                dec++;
                inc=1;
            }
            else if(nums[i-1]<nums[i]){
                inc++;
                dec=1;
            }
            else{
                dec=1;
                inc=1;
            }

            longest=max(longest,max(inc,dec));
        }
        return longest;
    }
};