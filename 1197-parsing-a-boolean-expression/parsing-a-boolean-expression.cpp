class Solution {
    private:
    char solve(vector<char> v , char op) {
        if(op=='!' ) {
            if(v[0]=='t') {
                return 'f';
            } 
            else {
                return 't';
            }
        }
        if(op=='&') {
            for(int i=0;i<v.size();i++) {
                if(v[i]=='f') {
                    return 'f';
                }

            }
            return 't';
        }
        if(op=='|') {
            for(int i =0;i<v.size();i++) {
                if(v[i]=='t') {
                    return 't';
                }

            }
            return 'f';
        }
        return 't';
    }
public:
    bool parseBoolExpr(string e) {
        stack<char> st;
        for(int i=0;i<e.size();i++) {
           if(e[i]==',') {
            continue;
           }
            if(e[i]==')') {
                vector<char> v;
                while( st.top()!='(') {
                    v.push_back(st.top());
                    st.pop();
                }
                st.pop();
                char op = st.top();
                st.pop();
                st.push(solve(v,op));

            }
            else {
               st.push(e[i]);
            }
        }
        if(st.top()=='t') {
            return true;
        }
        return false;
    }
};