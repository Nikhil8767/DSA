class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n= releaseTimes.size();
        int m=keysPressed.length();
        char c=keysPressed[0];
         int max=releaseTimes[0];
        
        for(int i=1;i<n;i++){ 
       int  duration=releaseTimes[i]-releaseTimes[i-1];
        if(duration>max){
                max=duration;
                c=keysPressed[i];
            }
            else if((duration==max) && (keysPressed[i]>c)){
                c=keysPressed[i];
            }
        }
        return c;
    }
};