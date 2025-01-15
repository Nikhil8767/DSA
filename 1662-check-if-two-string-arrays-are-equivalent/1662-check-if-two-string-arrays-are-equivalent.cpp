class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string temp=" ";
        string demp=" ";
        for(const string& s:word1){
           temp+=s;
        }
          for(const string& s:word2){
           demp+=s;
        }
        if(temp==demp){
            return true;
        }
        return false;
    }
};