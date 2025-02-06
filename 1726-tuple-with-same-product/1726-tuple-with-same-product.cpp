class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n=nums.size();
        int tuple=0;
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int p=nums[i]*nums[j];
                mp[p]++;
            }
        }
        for(auto &it:mp){
            if(it.second>=2){
            int prod=it.first;
            int freq=it.second;
            tuple+=(freq*(freq-1))/2;
            }
            
        }
        return tuple*8;



        // this was the brute force that came to my mind*******************************************************

        // int n=nums.size();
        // vector<int>temp;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         temp.push_back(nums[i]*nums[j]);
        //     }
        // }
        
        // int sum=0;
        // for(int i=0;i<temp.size();i++){
        //     for(int j=i+1;j<temp.size();j++){
        //         if(temp[i]==temp[j]){
        //             sum=sum+8;
        //         }
        //     }
        // }
        // return sum;
    }
};