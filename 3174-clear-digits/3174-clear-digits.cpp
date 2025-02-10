class Solution {
public:
    string clearDigits(string s) {
        int n=s.length();


        // this was the sescond way but test case passed but hidden test case failed 
        // int count=0;
        int i=0;
        while(i<s.size()){ 
            if(isdigit(s[i])){
                s.erase(i,1);
                if(i-1>=0){
                    s.erase(i-1,1);
                }
                i--;
                }
                else{
                    i++;
                }
                
            }
            
        return s;
    }
};