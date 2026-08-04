class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> m;
        m[']']='[';
        m[')']='(';
        m['}']='{';
        stack<char> st;
        for(char c:s){
            if(c=='(' or c=='[' or c=='{'){
                st.push(c);
            }
            else{
                if(st.empty() or st.top()!=m[c]) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
