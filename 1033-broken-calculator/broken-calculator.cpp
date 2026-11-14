class Solution {
public:
    int brokenCalc(int st, int t) {
        int ans = 0;
        while(st<t) {
           ans++;
           if(t%2!=0) {
            t++;
           } 
           else {
            t = t/2;
           }
        }
        return st-t+ans;

    }
};