class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>st;
        int n=candyType.size();
        for(int i=0;i<n;i++){
            st.insert(candyType[i]);
        }
        int a=st.size();
        int count=0;
        for(int i=0;i<a;i++){
            if(i<n/2){
                count++;
            }
            
        };
        cout<<n/2<<endl;

        return count;
    }
};