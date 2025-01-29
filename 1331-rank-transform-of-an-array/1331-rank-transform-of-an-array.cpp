class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        set<int>temp(arr.begin(),arr.end());
        unordered_map<int,int>mp;

        int rank=1;
        for(auto& c:temp){
            mp[c]=rank++;
        }

        for(int& num:arr){
            num=mp[num];
        }
        return arr;


//*********this code is not working if you think of it don't do for it
        // set<int>temp;
        // for(int i=0;i<n;i++){
        //     temp.insert(arr[i]);
        // }
        // sort(temp.begin(),temp.end());

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(arr[i]==temp[j]){
        //             arr[i]=j+1;
        //             break;
        //         }
        //     }
        // }
        // return arr;

    }
};