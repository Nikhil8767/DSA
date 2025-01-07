class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>temp;
        vector<int>setname;
        int n=nums1.size();
        int m=nums2.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    temp.insert(nums2[j]);
                }
            }
        }
        // for(int i=0;i<temp.size();i++){
        //     setname.push_back(temp(i));
        // }
       
        return vector<int>(temp.begin(),temp.end());
    }
};