class Solution {
public:
    string reversePrefix(string word, char ch) {
         stack<char> st;
    string ans;
    int n = word.size();
    int idx = -1; 

    for (int i = 0; i < n; i++) {
        if (word[i] == ch) {
            idx = i; 
            break;
        }
    }

    if (idx == -1) {
        return word; 
    }

    for (int i = 0; i <= idx; i++) {
        st.push(word[i]);
    }

    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    for (int i = idx + 1; i < n; i++) {
        ans.push_back(word[i]);
    }

    return ans;
    }
};
