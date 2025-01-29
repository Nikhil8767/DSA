class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto& c:arr){
            mp[c]++;
        }
        int ans=-1;

        for(auto& pair:mp){
            if(mp[pair.first]==mp[pair.second])
            ans= max(ans,mp[pair.first]);
        }
        return ans;


        // int n=arr.size();
        // int count=1,ans=-1;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i+1;j<n;j++){
        //         if(arr[i]==arr[j]){
        //             count++;
        //         }
        //     }
        //        if(count==arr[i]){
        //          ans=arr[i];
        //        }
                
        //     }
        
        // return ans;
        
    }
};