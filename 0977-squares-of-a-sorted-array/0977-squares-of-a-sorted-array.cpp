class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        int a;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            a=nums[i]*nums[i];
            temp.push_back(a);
        }
        sort(temp.begin(),temp.end());
        return temp;
    }
};