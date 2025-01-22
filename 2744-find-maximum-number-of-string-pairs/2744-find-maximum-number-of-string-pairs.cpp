class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size();
        unordered_map<string,int>mp;
        int count=0;
        for(const string& word:words){
            string reverse_word=word;
            reverse(reverse_word.begin(),reverse_word.end());

            if(mp[reverse_word]>0){
                count++;
                mp[reverse_word]--;
            }
            else{
                mp[word]++;
            }
        }
        return count;
        
        // unordered_map<string,int>mp;
        // int count=0;
        // for(int i=0;i<n;i++){ 
        //     mp[words[i]]++;
        // }
        
        
        // for(const string& str:words){
        //     if(mp.find(str)!=mp.end()){
        //         count++;
        //     }
        // }
        
        // return count;
        
    }
};