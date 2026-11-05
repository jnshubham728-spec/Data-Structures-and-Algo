class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int a = nums[0];
        int  ans =1;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] -a >k) {
                ans++;
                a = nums[i];
            }
        }
        return ans;
    }
};