class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // int n = numbers.size();
        // int i = 0;
        // int j = n - 1;
        // vector<int> result;
        
        // while (i < j) {
        //     int sum = numbers[i] + numbers[j];
        //     if (sum == target) {
        //         result.push_back(i + 1);  // Use 1-based indexing
        //         result.push_back(j + 1);  // Use 1-based indexing
        //         break;  // Break after finding the solution
        //     } else if (sum > target) {
        //         j--;  // Move the right pointer to a smaller number
        //     } else {
        //         i++;  // Move the left pointer to a larger number
        //     }
        // }
        
        // return result;


        int n= numbers.size();
        int i=0;
        int j=n-1;
        vector<int>temp;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(sum==target){
                temp.push_back(i+1);
                temp.push_back(j+1);
        break;
            }
            else if(sum>target){
                    j--;
            }
            else{
                i++;
            }
        }
        return temp;




        // vector<int>temp;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(numbers[i]+numbers[j]==target){
        //             temp.push_back(i+1);
        //             temp.push_back(j+1);
        //             break;
        //         }
        //     }
        // }
        // return temp;
    }
};