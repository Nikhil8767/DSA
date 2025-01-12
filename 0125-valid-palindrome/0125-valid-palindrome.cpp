class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int i=0;
        bool ans;
        int j=n-1;
        while(i<=j){
           while(i<j && !isalnum(s[i])){i++;}
           while(i<j && !isalnum(s[j])){j--;}
             if(tolower(s[i])!=tolower(s[j])){
                return false;
                break;
            }
            i++;
            j--;
            

        }
        return true;
        
    }
};