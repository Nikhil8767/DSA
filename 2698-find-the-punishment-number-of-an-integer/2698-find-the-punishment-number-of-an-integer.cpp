class Solution {
public:

    bool fxn(int i, int num, vector<vector<int>>& dp, string &s){
        if(i == s.size() and num == 0) return true;
        if(i == s.size()) return false;
        // if(num == 0) return false;
        if(dp[i][num] != -1) return dp[i][num];
        bool ans = false;
        string tmp ;
        for(int idx = i; idx < s.size(); idx++){
            tmp.push_back(s[idx]);
            int val = stoi(tmp);
            if((num - val) >= 0){
                ans = ans | fxn(idx+1, num-val, dp, s);
            }else break;
        }
        return dp[i][num] = ans;
    }

    bool checkNumber(int num){
        string s = to_string((num*num));
        vector<vector<int>>dp(s.size(),vector<int>(num+1,-1));
        return fxn(0, num, dp, s);
    }

    int punishmentNumber(int n) {
       int sum = 0;
       for(int i = 1; i <= n; i++){
        if(checkNumber(i)) sum += (i * i) ;
       } 
       return sum;
    }
};