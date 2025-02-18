class Solution {
public:
    string smallestNumber(string pattern) {
        string result = "";
        vector<bool> visited(10, false);
        for(int i = 1; i <= 9; i++){
            visited[i] = true;
            result.push_back('0' + i);
            if(permute(1, pattern, visited, result)){
                return result;
            }
            visited[i] = false;
            result.pop_back();
        }
        return result;
    }
    bool permute(int index, string pattern, vector<bool>& visited, string& result) {
        if(index == pattern.size() + 1){
            return true;
        }
        int last_digit = result[index - 1] - '0';
        if(pattern[index-1] == 'I'){
            for(int i = last_digit+1; i <= 9; i++){
                if(!visited[i]){
                    visited[i] = true;
                    result.push_back('0' + i);
                    if(permute(index+1, pattern, visited, result)){
                        return true;
                    }
                    visited[i] = false;
                    result.pop_back();
                }
            }
        } else if(pattern[index-1] == 'D') {
            for(int i = 1; i < last_digit; i++){
                if(!visited[i]){
                    visited[i] = true;
                    result.push_back('0' + i);
                    if(permute(index + 1, pattern, visited, result)){
                        return true;
                    }
                    visited[i] = false;
                    result.pop_back();
                }
            }
        }
        return false;
    }
};