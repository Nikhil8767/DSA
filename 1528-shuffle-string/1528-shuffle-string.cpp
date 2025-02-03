class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();


        // string str(n,' ');
        // for(int i=0;i<n;i++){
        //     str[indices[i]]=s[i];
        // }
        
        string str(n,' ');
        string ans="";

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==indices[j]){
                    str[i]=s[j];
                }
            }
            ans+=str[i];
        }
        return ans;
    }
};