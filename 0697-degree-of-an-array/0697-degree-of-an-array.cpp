class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto& c:nums){
            mp[c]++;
        }
         int count=1,element;
        for(auto& pair:mp){
            // cout<<pair.first<<":"<<pair.second<<endl;
            if(pair.second>count){
                count=pair.second;
                element=pair.first;
            }
        }

        int i=0;
        int j=n-1;
        int ione=-1,jone=-1;
        while(i<=j){
            if(nums[i]==element){ione=i;}
            if(nums[j]==element){jone=j;}
             if (ione != -1 && jone != -1) { 
                break; // Break when both indices are found
            }
            if (nums[i] != element) {i++;}
            if (nums[j] != element) {j--;}
        }
        return jone-ione+1;
    }
};