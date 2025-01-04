class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        
        // i solved this in bruteforce
        // for(int i=0;i<n-1;i++){
        //     int man=nums[i+1];
        //     if(nums[i]<man && nums[i+2]<man){
        //         return i+1;
        //     }
        // }
        // return 0;




    //      if (n == 1) return 0;
    // if (nums[0] > nums[1]) return 0;
    // if (nums[n - 1] > nums[n - 2]) return n - 1;


    //     int s=0;
    //     int e=n-1;
    //     int mid=s+(e-s)/2;
    //     while(s<=e){
    //         if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]){
    //             return mid;
    //         }
    //         else if(nums[mid]>nums[mid-1]){
    //             s=mid+1;
    //         }
    //         else{
    //             e=mid-1;
    //         }
    //         mid=s+(e-s)/2;
    //     }
    //     return -1;


        //   int n = nums.size();
        int low = 0;
        int high = nums.size()-1;
        while(low < high){
            int mid = (low + high) >> 1;
            if(nums[mid] > nums[mid+1]){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};