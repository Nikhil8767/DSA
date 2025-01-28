class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int result=0;
        unordered_map<int,int>mp;

        for(auto c:dominoes){
            int a=c[0], b=c[1];
            int key=10*min(a,b)+max(a,b);
            mp[key]++;
        }
        int count=0;

        for(auto& [key,f]:mp){
            if(f>1){
                count+=(f*(f-1))/2;
            }
        }
        return count;







        // for(int i=0;i<dominoes.size();i++){
        //     for(int j=i+1;j<dominoes.size();j++){
        //         if((dominoes[i][0]==dominoes[j][0] && dominoes[i][1]==dominoes[j][1]) || (dominoes[i][0]==dominoes[j][1] && dominoes[i][1]==dominoes[j][0]) ){
        //             result++;
        //         }
        //     }
        // }
        // return result;
        
    }
};