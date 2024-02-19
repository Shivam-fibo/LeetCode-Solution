

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ans = 0;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                st.pop();
            } else if (operations[i] == "D") {
                st.push(st.top() * 2);
            } else if (operations[i] == "+") {
                int first = st.top();
                st.pop();
                int second = st.top();
                st.push(first);
                st.push(first + second);
            } else {
                st.push(stoi(operations[i]));
            }
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};


