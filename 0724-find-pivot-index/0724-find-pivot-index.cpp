class Solution {
public:
    int pivotIndex(vector<int>& nums) {
//         int n=nums.size(); 
//         int sum=0;
//         int dum=0;
//         int i=0;
//         int temp=0;
//         int j=n-1;

//         while(i<j){
//             sum=sum+nums[i];
//             dum=dum+nums[j];
//             if(sum>dum){
//                 j--;
//             }
//             else if(dum>sum){
//                 i++;
//             }
//             else if(sum==dum){
//                  temp= i+1;
//             }
//             else{
//                 temp=-1;
//             }     
//    }
//     return temp;

             int right_sum = accumulate(nums.begin(),nums.end(),0); 
		//accumulate(first, last, sum) ,i.e sum : initial value of the sum
        int left_sum = 0;
        for(int i = 0;i < nums.size();i++){
            right_sum -= nums[i];
            if(left_sum == right_sum){
                return i;
            }
            left_sum += nums[i];
        }
        return -1;


    }
};