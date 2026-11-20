class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int d=0;
        vector<int>  ans(seq.size());
        for(int i=0;i<seq.size();i++)
        {
            if(seq[i]=='(')
            {
                d++;
                ans[i]=d%2;
            }
            else
            {
                ans[i]=d%2;
                d--;
            }
        }
        return ans;
    }
};