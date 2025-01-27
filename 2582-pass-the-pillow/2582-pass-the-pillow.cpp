class Solution {
public:
    int passThePillow(int n, int time) {
        int cyclelength=2*(n-1);
        int effectivetime=time % cyclelength;

        if(effectivetime<(n-1)){
            return 1+effectivetime;
        }
        else{
            return n-(effectivetime-(n-1));
        }
    }
};