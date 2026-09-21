class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        int left=0;
        set<char>st;
        for(int i=0;i<s.size();i++){
            while(st.count(s[i])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[i]);
            maxlen=max(maxlen,i-left+1);
        }
            
     return maxlen;
    }
};