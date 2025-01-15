class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int count=0;
        int result=0;
        for(int row=0;row<n;row++){
                for(int col=1;col<m;col++){
                    matrix[row][col]+=matrix[row][col-1];
                }
        }

        for(int startCol=0;startCol<m;startCol++){

            for(int j=startCol;j<m;j++){
                unordered_map<int,int>mp;
                mp.insert({0,1});
                int cumSum=0;

                for(int row=0;row<n;row++){
                    cumSum+=matrix[row][j]-(startCol>0?matrix[row][startCol-1]:0);

                    if(mp.find(cumSum-target)!=mp.end()){
                        result+=mp[cumSum-target ];
                    }
                    mp[cumSum]++;
                }
            }
        }
        return result;

        // for(int sr=0;sr<n;sr++){
        //     for(int sc=0;sc<n;sc++){
        //         int s=0;
        //         for(int er=sr;er<m;er++){
        //             for(int ec=sr;ec<m;ec++){
        //                 s+=matrix[er][ec];
        //                  if(s==target){
        //             count++;
        //         }
        //             }
        //         }
               
        //     }
        // }
        // return count;
    }
};