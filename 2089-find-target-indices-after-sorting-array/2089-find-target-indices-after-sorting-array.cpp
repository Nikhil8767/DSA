class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans;
        
        // Linear traversal after sorting to collect indices of all target values
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                ans.push_back(i);
            }
        }
        
        return ans;


    //     int n=nums.size();
    //     sort(nums.begin(),nums.end());
    //     int s=0;
    //     int e=n-1;
    //     int mid=s+(e-s)/2;
    //     vector<int>ans;
    //     while(s<=e){
    //         if(nums[mid]==target){
    //             ans.push_back(mid);
    //         }
    //         else if(nums[mid+1]>target){
    //             e=mid-1;
    //         }
    //         else if(nums[mid-1]<target){
    //             s=mid+1;
    //         }
    //         mid=s+(e-s)/2;
    //     }
    //     return ans;
    }
};