class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid=(s+e)/2;
        int ans=0;
        while(s<=e){
              ans=mid;
            if(nums[mid]==target){
                return mid;
              

            }
            else if(nums[mid]>target){
                e=mid-1;

            }
            else{
                s=mid+1;
            }
            mid=(s+e)/2;

        }
        return s;
    }
};