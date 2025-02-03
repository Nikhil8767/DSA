class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto& c:nums){
            mp[c]++;
        }
        vector<int>temp;
        for(auto& pair:mp){
            if(pair.second>n/3){
                temp.push_back(pair.first);
            }
        }
        return temp;
    }
};