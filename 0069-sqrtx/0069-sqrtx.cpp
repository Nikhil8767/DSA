class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        if(x==0 ||x==1) return x;
        for(int i=1;i<=x;i++){
            int a=i*i;
            if(a>x){
                return i-1;
            }
            // else if(a==x) {
            //         return i;
            // }
        }
        return 0;
    }
};