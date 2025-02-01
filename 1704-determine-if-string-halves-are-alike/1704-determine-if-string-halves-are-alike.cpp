class Solution {
public:
bool isvowel(char &ch){
    return ((ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| 
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'));
}
    bool halvesAreAlike(string s) {
        int n=s.length();
        int mid=n/2;
        int i=0, j=mid;
        int countL=0;
        int countR=0;

        while(i<n/2 && j<n){
            if(isvowel(s[i]))countR++;
            if(isvowel(s[j]))countL++;
            i++;
            j++;
        }
        return countL==countR;






        // this was the wrong the solution which i thought firtst 
        // int mid=n/2;
        // int i=0,j=mid;
        // int count=0,sum=0;
        // while(i<n/2 && j<n){
        //     if(s[i]=='A' || s[i]=='a' || s[i]=='e' || s[i]=='E' || s[i]=='I' || s[i]=='i' || s[i]=='O' || s[i]=='o' || s[i]=='u' || s[i]=='U'){
        //         count++;
        //         i++;
        //     }

        //      if(s[j]=='A' || s[j]=='a' || s[j]=='e' || s[j]=='E' || s[j]=='I' || s[j]=='i' || s[j]=='O' || s[j]=='o' || s[j]=='u' || s[j]=='U'){
        //         sum++;
        //         j++;
        // }
        // else{
        //     i++;
        //     j++;
        // }
        // }
        // if(sum==count)return true;
        // else return false;
    }
};