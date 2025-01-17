class Solution {
public:
    bool checkRecord(string s) {
        int n=s.length();
        int absent=0;
        int late=0;
        int a=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                absent++;
                late=0;
            }
            else if(s[i]=='L'){ 
            late++;
             a=max(a,late);
            }
            else{
                late=0;
            }
        }
        cout<<a<<endl;
        if(absent<2 && a<3){
            return true;
        }
        else return false;
    
    }
};