class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        // int i=1;
        // int ans=0;
        // while(i<=n){
        //     if(nums[n-i]==nums[n-i-1]){
        //         i=
        //     }
        //     else{
        //          ans= nums[n-i];
        //         break;
        //     }
        // }
        // return ans;
    sort(nums.begin(),nums.end());
    int count=0;
    int third=0;
    for(int i=n-1;i>0;i--){
        if(nums[i]!=nums[i-1]){
            count++;
            third=nums[i];
        }
        else if(i==1 && nums[i]==nums[i-1]){
            count++;
            third=nums[i];
        }
        if(count>2){
            return third;
        }
    }
    if(count+1==3 && nums[0]!=nums[1]){
        return nums[0];
    }
    return nums[nums.size()-1];


    }
       
};