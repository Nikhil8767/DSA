class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int curSum=0;
            for(int j=i;j<n;j++){
                curSum+=arr[j];
                if((j-i+1)%2==1){
                    sum+=curSum;
                }
            }
        }
        return sum;

        //this was the basic brute force code now above one is little better than this ....................
        // int sum=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         if((j-i+1)%2==1){
        //             for(int k=i;k<=j;k++){
        //                 sum+=arr[k];
        //             }
        //         }
        //     }
        // }
        // return sum;

        
    }
};