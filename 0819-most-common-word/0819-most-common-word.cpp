class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int>mp;
        unordered_set<string>bannedSet(banned.begin(),banned.end());
        string word;
        for(char c:paragraph){
            if(isalpha(c)){
                word+=tolower(c);
            }
            else if(!word.empty()){
                mp[word]++;
                word.clear();
            }
        }
        if(!word.empty())mp[word]++;

        int maxFreq=0;
        string most;
        for(const auto& pair:mp){
            if(bannedSet.find(pair.first)==bannedSet.end() && pair.second>maxFreq){ 
                    maxFreq = pair.second;
                    most=pair.first;
                }
        }
                 return most;
            }
           
};