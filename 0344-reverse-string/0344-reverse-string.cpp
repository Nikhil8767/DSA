class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        for(int i=0;i<n;i++){
            cout<<s[i]<<" ";
        }
    }
};