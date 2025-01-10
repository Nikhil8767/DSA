class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int p=m-1;
        // int q=n-1;
        // int a=m+n-1;

       int p1 = m - 1;  // Last index of initial elements in nums1
        int p2 = n - 1;  // Last index of nums2
        int p = m + n - 1;  // Last index of nums1
        
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];  // Place larger element at the end
                p1--;
            } else {
                nums1[p] = nums2[p2];  // Place larger element from nums2
                p2--;
            }
            p--;
        }
        
        // If nums2 still has remaining elements, copy them
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
        
        // while(q>=0 && p>=0){
        //     if(nums2[q]>nums1[p]){
        //         nums1[a]=nums2[q];
        //         q--;
        //         a--;
        //     }
        //     else if(nums2[q]<nums1[p]){
        //         nums1[a]=nums1[p];
        //         p--;
        //         a--;
        //     }
        //     else{
        //         nums1[a]=nums2[q];
        //         q--;
        //         a--;
        //     }
        // }
    }
};