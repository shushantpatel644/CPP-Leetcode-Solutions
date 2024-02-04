class Solution {
  public: bool isValid(string s) {
    stack < int > st;
    int i = 0;
    while (i < s.length()) {
      // if (s[i] == ')' || s[i] == '}' || s[i] == ']') { 
      //   st.push(s[i]);}
         st.push(s[i]);
      if (s[i] == ')' && st.size() > 0 && st.top() == '(') {
        st.pop();
      } else if (s[i] == '}' && st.size() > 0 && st.top() == '{') {
        st.pop();
      } else if (s[i] == ']' && st.size() > 0 && st.top() == '[') {
        st.pop();
      } else 
    //   {
    //     st.push(s[i]);
    //   }
      i++;
    }
    if (st.size() == 0) {
      return true;
    }
    return false;
  }
};