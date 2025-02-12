class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mpp;// sum -> max_ele
        int max_sum=-1;
        for(int i=0;i<n;i++){
            int k=nums[i];//18//43//36
            int s=0;
            while(k){
                s=s+(k%10);//9//7//9
                k=k/10;
            }
            if(mpp.find(s)!=mpp.end()){
                max_sum=max(max_sum,nums[i]+mpp[s]);//54
                if(nums[i]>mpp[s]){
                    mpp[s]=nums[i];
                }
            }else{
                mpp[s]=nums[i];//9->18 7->43 
            }
        }
        return max_sum;
    }
};