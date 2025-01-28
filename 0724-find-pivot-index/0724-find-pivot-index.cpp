class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        int ans=-1;
        while(i<j){
            if(nums[i]<nums[j]){
                i++;
                nums[i]+=nums[i-1];
            }
            else if(nums[i]>nums[j]){
                j--;
                nums[j]+=nums[j+1];

            }
            if(nums[i]==nums[j]){
                ans=i;
                i++;
                j--;
            }
        }
        if(i==n-1) return -1;
        else if(ans==0) return 0;
        else return ans+1;



        // for(int i=1;i<n;i++){
        //     nums[i]+=nums[i-1];
        // }
        // int ans=-1;
        // for(int i=0;i<n;i++){
        //     if(nums[n-1]-nums[i]==(nums[n-1]/2)-1){
        //         ans= i;
        //     }
        //     else if(nums[n-1]-nums[i]<0){
        //         ans= 0;
        //     }

        // }
        // return ans;
        
        
    }
};