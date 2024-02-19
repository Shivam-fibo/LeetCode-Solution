class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string ans = "";
        for(int i=0; i<s.size(); i++){
            if(!st.empty() and s[i] == st.top()){
               st.pop();
            }
            else{
              st.push(s[i]);
            }

        }
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};