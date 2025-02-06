class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        string result="";
        int depth=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(depth>0){result+=s[i];}
                depth++;
            }
            else{
                depth--;
                if(depth>0){
                    result+=s[i];
                }
            }
        }
        return result;
    }
};