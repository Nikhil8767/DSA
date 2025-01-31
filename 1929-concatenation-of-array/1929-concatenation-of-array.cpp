class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        int a=2*n;
        vector<int>temp;
        for(int i=0;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            temp.push_back(nums[i]);
        }
       
        return temp;
    }
};