class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.length();
        int m=magazine.length();
        bool ans;
        if(n>m) return false;
       unordered_map<char,int>mp;
       for(char c:magazine){
        mp[c]++;
       }
        for(char c:ransomNote){
            if(mp[c]<=0){
                return false;
            }
            mp[c]--;
        }
       return true;
    }
};