class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                if(ans!=-1 && i-ans<=k ){
                    return false;
                }
                    ans=i;
            }
        }
        return true;
    }
};