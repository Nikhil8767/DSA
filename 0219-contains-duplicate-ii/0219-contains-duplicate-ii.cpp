class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    //     int n=nums.size();
    //     int count=0;
    //     if(n==1) return false;
    //     if(n==2)
    //    for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(nums[i]==nums[j]){
    //             count++;
    //         }
    //     }
    //   }
    //   int temp=n-count;
    //   if(temp==k){
    //     return true;
    //   }
    //   else return false;

    map<int,int>m;
    for(int i=0;i<nums.size();i++){
        if(m.find(nums[i])!=m.end()){
            if(abs(i+1 -m[nums[i]])<=k) return true;
            else m[nums[i]]=i+1;
        }
        else{
            m[nums[i]]=i+1;
        }
    }
    return false;
    }
};