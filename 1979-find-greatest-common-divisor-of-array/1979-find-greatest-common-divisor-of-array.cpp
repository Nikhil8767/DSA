class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mn=nums[0];
        int mx=nums[n-1];
        int ans;

        for(int i=mn;i>=1;i--){
            if(mn%i==0 && mx%i==0){
                ans=i;
                break;
            }
        }
        return ans;
        
    }
};