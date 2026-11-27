class Solution {
public:
    bool isValid(string s) {
        string st;
        for(int i=0;i<s.length();i++)
        {
            st.push_back(s[i]);
            int n=st.size();
            if(n>=3 && st[n-3]=='a' && st[n-2]=='b' && st[n-1]=='c')
            {
                st.erase(n-3,3);
            }
        }
        if(st.empty())
        {
            return true;
        }
        return false;
    }
};