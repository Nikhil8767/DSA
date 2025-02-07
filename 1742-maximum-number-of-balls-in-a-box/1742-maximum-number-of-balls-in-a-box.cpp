class Solution {
public:
int sumOfDigit(int n){
    int a,sum=0;
    while(n>0){ 
    a=n%10;
    sum+=a;
    n=n/10;
    }
    cout<<sum;
    return sum;
}
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>mp;
        int maxi=0;
        for(int i=lowLimit;i<=highLimit;i++){
            int number=sumOfDigit(i);
            mp[number]++;
            maxi=max(maxi,mp[number]);
        }
        
        return maxi;
    }
};