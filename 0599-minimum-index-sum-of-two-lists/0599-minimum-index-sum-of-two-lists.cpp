class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n=list1.size();
        int m=list2.size();
        unordered_map<string,int>mp;
        int index=0;
        for(const string& word:list1){
            mp[word]=index;
            index++;
        }
        int minIndex=INT_MAX;
        vector<string>result;
        for(int j=0;j<m;j++){
            if(mp.find(list2[j])!=mp.end()){
                int indexSum=mp[list2[j]]+j;

                if(indexSum<minIndex){
                    minIndex=indexSum;
                    result.clear();
                    result.push_back(list2[j]);
                }
                else if(indexSum==minIndex){
                    result.push_back(list2[j]);
                }
            }
        }
        return result;
        
                

        
    }
};