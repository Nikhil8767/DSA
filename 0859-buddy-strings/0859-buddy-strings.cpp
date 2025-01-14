class Solution {
public:
    int checkFreq(string& s){
        int a[26]={0};
        for(char &ch:s){
            a[ch-'a']++;
            if(a[ch-'a']>1)
            return true;
        }
        return false;
    }
    bool buddyStrings(string s, string goal) {

        if(s.length() != goal.length()){
            return false;
        }
        if(s==goal){
            return checkFreq(s);
        }
        vector<int>index;
        for(int i=0;i<s.length();i++){
            if(s[i]!=goal[i]){
                index.push_back(i);
            }
        }
        if(index.size()!=2)
        return false;

        swap(s[index[0]],s[index[1]]);
        return s==goal;
        // int n=s.length();
        // int count=0,sum=0;
        // int i=0;
        // int j=n-1;
        // for(int i=0;i<n-1;i++){
        //     if(s[i]!=goal[i]){
        //         swap(s[i],s[i+1]);
        //         sum++;
        //         break;
        //     }
        //     else if((s[i]!=s[i+1]) && (s[i]==goal[i]))
        //     count++;
            
        // }
        // cout<<count;
        // if(s==goal){
        //     if(count<n && sum==1){
        //         return true;
        //     }
        // }
        // else if(count==n ){
        //     return false;
        // }
        return true;
        // while(i<j){
        //     swap(s[i],s[j]);
        //     i++;
        //     j--;
        // }
        // if(s==goal){
        //     return true;
        // }
        // return false;
    }
};