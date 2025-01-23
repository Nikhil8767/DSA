class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int count=0;
        for(int i=0;i<n;i++){
             int ans=0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' ')
                ans++;
                count=max(count,ans);
            }
        }

        return count+1;
        
    }
};