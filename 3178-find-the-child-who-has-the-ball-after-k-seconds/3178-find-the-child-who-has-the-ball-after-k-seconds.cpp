class Solution {
public:
    int numberOfChild(int n, int k) {
        int c=2*(n-1);
        int et=k % c;
        if(et<(n-1)){
            return 1+et-1;
        }
        else{
            return n-(et-(n-1))-1;
        }
    }
};