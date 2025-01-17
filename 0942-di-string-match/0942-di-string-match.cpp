class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.length();
        vector<int>temp;
        int a=0;
        int e=n;
        for(int i=0;i<=n;i++){
            if(s[i]=='I'){
                temp.push_back(a);
                a++;
            }
            else{
                temp.push_back(e);
                e--;
            }
            
        }
        return temp;
    }
    
};