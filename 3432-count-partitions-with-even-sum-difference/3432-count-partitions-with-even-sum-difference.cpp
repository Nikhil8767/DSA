class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int sum=0,dam=0;
        int count=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            for(int j=i+1;j<n;j++){
                dam+=nums[j];
            }
            int total=abs(sum-dam);
            if(total%2==0){
                count++;
            }

            
            dam=0;
            
        }
        
        if(count==0){
            return 0;
        }
        else return count-1;
    }
};