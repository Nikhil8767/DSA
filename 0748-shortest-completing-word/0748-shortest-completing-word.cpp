class Solution {
public:
bool isComplete(const vector<int>& charCount,const string& word){
    vector<int>wordCount(26,0);
    for(char c:word){
        wordCount[tolower(c)-'a']++;
    }
    for(int i=0;i<26;i++){
        if(charCount[i]>wordCount[i]){
            return false;
        }
    }
    return true;
}
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int>charCount(26,0);
        for(char c :licensePlate){
            if(isalpha(c)){
                charCount[tolower(c)-'a']++;
            }
        }
        string result;
        int minLength=INT_MAX;
        for(string& word:words){
            if(isComplete(charCount,word) && word.length()<minLength){
                result=word;
                minLength=word.length();
            }
        }
        return result;
        
    }
};
