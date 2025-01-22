class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n=arr.size();
        string s="";
        unordered_map<string,int>mp;
        for(string c:arr){
            mp[c]++;
        }
        int count=0;
        for(const string& str:arr){
            if(mp[str]==1){
                count++;
                if(count==k){
                    return str;
                }
            }
        }
        return "";
    }
};