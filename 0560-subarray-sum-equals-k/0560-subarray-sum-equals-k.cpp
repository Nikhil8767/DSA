class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int len=0;
        for(int i=0;i<n;i++){
            int s=0;
            
            for(int j=i;j<n;j++){
                s+=nums[j];
                if(s==k){
                    len=max(len,j-i+1);
                    count++;
                }
            }
        }
        return count;
    }
};