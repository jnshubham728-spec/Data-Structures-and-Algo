class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int sum = a+b+c;
        int maxi = max(a,max(b,c));
        int ans = min (sum/2,sum-maxi);
        return ans;
    }
};