class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
       vector<int>diff;
        int count=0;
        if(s1==s2)return true;
        if(n!=m) return false;
        
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                diff.push_back(i);
            }
        }
       
        
        if(diff.size()==0) return true;
        else if(diff.size()==2){
            int i=diff[0],j=diff[1];
            return (s1[i]==s2[j]  && s1[j]==s2[i]);
        }
        return false;
        
    }
};