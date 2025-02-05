class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.length();
        set<int>st;

        unordered_map<char,int>mp;
        for(char& c:s){
            mp[c]++;
        }
        int sum=0;
        int hasodd=0;
        for(auto& pair:mp){
            if(pair.second%2==0){
                sum+=pair.second;
            }
            else{
                sum+=pair.second-1;
                hasodd=1;
            }
        }
        int m=st.size();
        // cout<<a<<endl;
        
        return sum+hasodd;
    }
};