class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        int j=2;
        for(int i=2;i<=n;i++){
            if(i%j!=0){
                count++;
            }
        }
        j++;
        return count;
    }
};