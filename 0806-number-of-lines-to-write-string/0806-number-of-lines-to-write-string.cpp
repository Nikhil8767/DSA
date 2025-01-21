class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int n=widths.size();
        int line=1;
        int curwidth=0;
        for(char ch:s){
            int charwidth=widths[ch-'a'];
    
        if(curwidth+charwidth>100){
            line++;
            curwidth=charwidth;
        }
        else{
            curwidth+=charwidth;
        }
        }

        return {line,curwidth};





        // int sum=0;
        // for(int i=0;i<n;i++){
        //     sum+=width[i];
        // }
        // int m=sum/100;
        // temp.push_back(m+1);
        
    }
};