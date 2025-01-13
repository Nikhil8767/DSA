class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        nums2.push_back(-1);
        int n=nums1.size();
        int m=nums2.size();
        vector<int>arr;
        for(int i=0;i<n;i++){
            bool flag=0;
            int j=0;
            while(j<m){
                if(nums1[i]==nums2[j]) flag=1;
                if((nums2[j]>nums1[i] || nums2[j]==-1) && flag){
                    arr.push_back(nums2[j]);
                    break;
                }
                j++;
            }

        }
        return arr;
    }
};