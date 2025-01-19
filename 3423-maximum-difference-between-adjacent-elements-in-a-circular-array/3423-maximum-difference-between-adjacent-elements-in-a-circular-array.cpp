class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int a;
        int ans=0;
        for(int i=0;i<n-1;i++){ 
                a=abs((nums[i])-(nums[i+1]));
                ans=max(ans,a);
            
        }
        // cout<<ans<<endl;
        int b=abs(nums[0]-nums[n-1]);
        // cout<<b<<endl;
        if(ans>b){
            return ans;
        }
       
        return b;
        
    }
};