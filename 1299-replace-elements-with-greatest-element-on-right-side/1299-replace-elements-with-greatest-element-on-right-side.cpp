class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>brr;
       
      for(int i=0;i<n-1;i++){
        int max=INT_MIN;
        for(int j=i+1;j<n;j++){
            // if(j==n) brr.push_back(-1);
             if(max<arr[j]){
                max=arr[j];
            }
        }
       
        brr.push_back(max);
      }
      brr.push_back(-1);
        return brr;
        
    }
};