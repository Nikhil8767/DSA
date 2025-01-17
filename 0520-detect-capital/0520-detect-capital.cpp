class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int count=0;
        for(int i=0;i<n;i++){
            // if(isupper(word[i]) && isupper(word[i-1]) && isupper(word[i+1])){
            //     return true;
            // }
            if(isupper(word[i])){
                count++;
            }

            // else if(isupper(word[n-1])&& islower(word[n-2]))return false;
        }
        if(count==n){
            return true;
        }
        else if(count==0){
            return true;
        }
        else if(count==1 && isupper(word[0])){
            return true;
        }
        return false;
    }
};