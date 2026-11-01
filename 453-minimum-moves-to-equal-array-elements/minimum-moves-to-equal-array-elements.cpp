class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int move =0;
        int min = nums[0];
        for(int i=1;i<nums.size();i++) {
            move = move +(nums[i]-min);
        }
        return move;
    }
};