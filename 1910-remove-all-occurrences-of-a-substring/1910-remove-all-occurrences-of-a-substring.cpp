class Solution {
public:
    string removeOccurrences(string s, string part) {
        string result="";
        int n=part.length();

        for(char c:s){
            result.push_back(c);

            if(result.length()>=n && result.substr(result.length()-n)==part){
                result.erase(result.length()-n);
            }
        }
        return result;




        // this is my first approch now lets do by the stack one the above one
        // while(s.find(part) !=string::npos){
        //     s.erase(s.find(part),part.length());
        // }
        // return s;
        
    }
};