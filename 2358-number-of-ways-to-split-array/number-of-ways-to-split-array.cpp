class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
      long long total =0;
      int c =0;
      long long leftsum =0;
      for(int i=0;i<nums.size();i++) {
        total = total+nums[i];
      }
      for(int j=0;j<nums.size()-1;j++) {
        leftsum = leftsum + nums[j];
        long long rightsum =  total - leftsum;
        if(leftsum>=rightsum) {
            c++;
        }
      }
      return c;
    }
};