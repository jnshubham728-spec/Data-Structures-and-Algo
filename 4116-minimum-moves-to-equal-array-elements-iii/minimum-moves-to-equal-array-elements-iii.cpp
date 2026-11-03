class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxx =nums[0];
        for(int i=0;i<nums.size();i++) {
            if(maxx<nums[i]) {
                maxx=nums[i];
            }
        }
        int sum =0;
        for(int i=0;i<nums.size();i++) {
          sum = sum +(maxx-nums[i]);
            }
        
        return sum;
    }
};