class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=0;
        int e=nums.size()-1;
        int mid = s+e/2;
        int sum=0;
        for(int i=0;i<nums.size();i++) {
        sum =sum+ abs(nums[mid]-nums[i]);
        }
        return sum;
    }
};