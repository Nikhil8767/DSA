class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            // if(nums[0]>nums[mid]){
            //     ans=s;
            //     e=mid-1;
            // }
            // else{
            //     s=mid-1;
            // }

            // mid=s+(e-s)/2;

            if(nums[mid]<nums[e]){
                e=mid;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return nums[e];
    }
};