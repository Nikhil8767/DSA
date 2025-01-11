class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      int sum=0;
      double res;
      for(int i=0;i<k;i++){
        sum+=nums[i];
      }
      res=sum;
      for(int i=k;i<nums.size();i++){
        sum=sum-nums[i-k];
        sum=sum+nums[i];
        if(sum>res) res=sum;
      }
        return res/k;
      
      
      
        // int n=nums.size();
        // double  avg=0;
        // for(int i=0;i<n;i++){
        //     int count=1;
        //     int sum=0,ans=0;
        //     double dam=0;
        //     for(int j=i+1;j<n;j++){
        //         count++;
        //         if(count<=k){
        //             sum=sum+nums[j];
        //             ans=ans+nums[i];
        //             dam=(sum+ans)/k;
        //             if(dam>avg){
        //                 avg=dam;
        //             }

        //         }
        //     }
           
        // }
        //  return avg;
    }
};