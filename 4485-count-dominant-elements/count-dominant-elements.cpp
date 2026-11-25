class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int c =0;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            if(i==0 &&n==1) {
                c++;
            }
           else if(i==0 ) {
                if( nums[i]>=nums[i+1]) {
                    c++;
                }
            }
            else if(i == n - 1) {
                if(nums[i]>=nums[i-1]) {
                    c++;
                }
            }
            else if((nums[i+1]+nums[i-1]) <=nums[i]*2) {
                c++;
            }
        }
        return c;
    }
};