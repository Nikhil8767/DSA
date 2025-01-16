class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> fromCities;

    
    for (const auto& path : paths) {
        fromCities.insert(path[0]);
    }


    for (const auto& path : paths) {
        if (fromCities.find(path[1]) == fromCities.end()) {
            return path[1];  
        }
    }
    return "";  
}
};