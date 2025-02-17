class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>result(n,0);
        if(k==0) return result;
        int i=-1;
        int j=-1;
        if(k>0){
            i=1;
            j=k;
        }
        else{
            i=n-abs(k);
            j=n-1;
        }

        int windowSum=0;
        for(int pointer=i;pointer<=j;pointer++){
            windowSum+=code[pointer];
        }
        
        for(int k=0;k<n;k++){
            result[k]=windowSum;

            windowSum-=code[i%n];
            i++;

            windowSum+=code[(j+1)%n];
            j++;
        }

        return result;
        






        // vector<int>result(n,0);
        //    for(int i=0;i<n;i++){
        //     int sum=0;
        //         if(k<0){
        //             for(int j=i-abs(k);j<n;j++){
        //                 sum+=code[(j+n)%n];
        //             }
        //         }
        //         else if(k>0){
        //             for(int j=i+1;j<i+k;j++){
        //                 sum+=code[(j%n)];
        //             }
        //         }
        //         result[i]=sum;
        //    }
        //    return result;
        }
};