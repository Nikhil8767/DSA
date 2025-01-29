class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
          int c=nums[i];
          int sum=0;
          while(c>0){
            int a=c%10;
            sum+=1;
            c=c/10;
          }
          if(sum%2==0) count++;
        }
        return count;
    }
};