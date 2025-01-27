class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int> >pascal(rowIndex+1);
        vector<int>temp;
        for(int i=0;i<rowIndex+1;i++){
            pascal[i].resize(i+1);
            for(int j=0;j<=i;j++){
                if(i==rowIndex){ 
                if(j==0 || j==i){
                    pascal[i][j]=1;
                     temp.push_back(pascal[i][j]);
                }
                else{
                    pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
                    temp.push_back(pascal[i][j]);
                }
            }
            else{
                 if(j==0 || j==i){
                    pascal[i][j]=1;
                   
                }
                else{
                    pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
                    
                }
            }
            }
        }
        return temp;
        
    }
};