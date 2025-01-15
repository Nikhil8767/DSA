class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>uniqueEmail;

        for(const string& email:emails){
            string cleanEmail;
            bool ignore=false;
            for(char c:email){
                if(c=='@'){
                    cleanEmail+=email.substr(email.find('@'));
                    break;
                }
                if(c=='.'){
                    continue;
                }
                if(c=='+'){
                    ignore=true;
                }
                if(!ignore){
                    cleanEmail+=c;
                }
            }
            uniqueEmail.insert(cleanEmail);
        }
        return uniqueEmail.size();
    }
};
