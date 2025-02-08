class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
         int m=trust.size();
        vector<int>indegree(n+1);
        vector<int>outdegree(n+1);

        for(vector<int>& vec:trust){
            int u=vec[0];
            int v=vec[1];

            outdegree[u]++;
            indegree[v]++;

        }
        for(int i=1;i<=n;i++){
            if(indegree[i]==n-1 && outdegree[i]==0){
                return i;
            }
        }
        return -1;



    //     for(int i=0;i<m-1;i++){
    //         if(trust[i][1]!=trust[i+1][1]){
    //             return -1;
    //         }
    //     }

    //     // first i thought this but was wrong logic so i did the abve code
    //     int temp=0,sum=0;
       
    //     for(int i=1;i<=n;i++){
    //         sum+=i;
    //         // cout<<sum<<endl;
    //     }

    //     for(int i=0;i<m;i++){
    //         temp+=trust[i][0];
    //         // cout<<"temp value:"<<temp<<endl;
    //     }
    //    if(sum-temp==0) return -1;
    //    else return sum-temp;
        
    }
};