static const auto fast=[](){ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return nullptr;}();
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.size()%2!=0)
            return false;
        for(auto c:s)
        {
            if(c=='{' || c=='['|| c=='(') st.push(c);
            else 
            {
                if(st.empty() || (c=='}' && st.top()!='{')||(c==']' && st.top()!='[')||( c==')' && st.top()!='(')) return false;
            st.pop();
            }
        }
        return st.empty();
    }
};