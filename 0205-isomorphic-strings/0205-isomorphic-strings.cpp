class Solution {
public:
    bool checkNoOneToMany(string s, string t){
          unordered_map<char,char>m;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])!=m.end()){
                if(m[s[i]]!=t[i]){
                    return false;
                }
            }
                else{
                    m[s[i]]=t[i];
                }
            }
            return true;
     
    }
    bool isIsomorphic(string s, string t) {
      if(s.length()!=t.length()) return false;

      bool st=checkNoOneToMany(s,t);

      bool ts=checkNoOneToMany(t,s);

     return st && ts;



    }
};