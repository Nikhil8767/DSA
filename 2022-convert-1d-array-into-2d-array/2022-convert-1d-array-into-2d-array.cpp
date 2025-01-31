class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int> >temp(m,vector<int>(n));

        if(m==1 && n==1) return {};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                temp[i][j]=original[i*n+j];
            }
        }
        return temp;
    }
};