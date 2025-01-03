class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;

        while(s<=e){
          if (nums[mid] == target) return mid;

        //if left part is sorted:
        if (nums[s] <= nums[mid]) {
            if (nums[s] <= target && target <= nums[mid]) {
                //element exists:
                e = mid - 1;
            }
            else {
                //element does not exist:
                s = mid + 1;
            }
        }
        else { //if right part is sorted:
            if (nums[mid] <= target && target <= nums[e]) {
                //element exists:
                s = mid + 1;
            }
            else {
                //element does not exist:
                e = mid - 1;
            }
        }
        mid=s+(e-s)/2;
    }
    return -1;
    }
};