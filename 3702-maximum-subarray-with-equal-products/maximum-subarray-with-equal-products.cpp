class Solution {
public:
    int maxLength(vector<int>& nums) {
        int len=1;
        for(int i=0;i<nums.size();i++)
        {
            int p=1,l=1,g=0;
            for(int j=i;j<nums.size();j++)
            {
                if(p>INT_MAX/nums[j])
                {
                    break;
                }
                p*=nums[j];
                l=lcm(l,nums[j]);
                g=gcd(g,nums[j]);
                if(p==l*g)
                {
                    len=max(len,j-i+1);
                }
            }
        }
        return len;
    }
};