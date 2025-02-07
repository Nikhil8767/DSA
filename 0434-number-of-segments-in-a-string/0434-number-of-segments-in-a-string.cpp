class Solution {
public:
    int countSegments(string s) {
        // if(s[1])
       stringstream ss(s);
        string word;
        int count = 0;
        
        while (ss >> word) { // Extract words from the stream
            count++;
        }
        
        return count;
    }
};