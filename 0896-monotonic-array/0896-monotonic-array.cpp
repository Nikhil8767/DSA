class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        bool incresing=true,decresing=true;

        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                decresing=false;
            }
            else if(nums[i]<nums[i-1]){
                incresing=false;
            }
        }
        return incresing||decresing; 



        // this is what i thinked before but this was not the correct approch
        // int count=1;
        // int sum=1;
        // for(int i=0;i<n-1;i++){
        //     if(nums[i]>=nums[i+1]){
        //         count++;
        //     }
        //     else if(nums[i]<=nums[i+1]){
        //         sum++;
        //     }
        // }
        // cout<<count<<" "<<sum<<endl;
        // if((count==n) && (sum==1)){
        //     return true;
        // }
        // else if((sum==n) && (count==1)){
        //     return true ;
        // }
        // else return false;
        
    }
};