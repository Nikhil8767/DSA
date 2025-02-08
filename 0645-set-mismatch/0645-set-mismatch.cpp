class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        unordered_map<int,int>mp;

        for(auto& c:nums){
            mp[c]++;
        }
        int duplicate,missing;
         for (int i = 1; i <= n; i++) {
            if (mp[i] == 2) {
                duplicate = i;
            } else if (mp[i] == 0) {
                missing = i;
            }
         }
        temp.push_back(duplicate);
        temp.push_back(missing);
        return temp;
    }
};