/*
@author Anmol Ahuja
Reference : https://leetcode.com/problems/longest-substring-without-repeating-characters/
*/

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        /*
        TC : O(No of substrings) = O(n^2)
        SC : O(256)
        int maxlen = 0;

        for (int start = 0; start < s.length(); start++)
        {
            int freq[256] = {0};
            for (int end = start; end < s.length(); end++)
            {
                freq[s[end]++];
                if (freq[s[end]] > 1)
                    break;
                maxlen = max(maxlen, end - start + 1);
            }
        }
        return ans;
        */
       

        // TC : O(n)
        // SC : O(n)
        int maxlen = 0, start = 0, end = 0;
        set<char> st;

        // In case string is empty
        if (s.length() == 0)
            return 0;

        while (end < s.length())
        {
            if (st.count(s[end]) == 0)
            {
                st.insert(s[end]);
                maxlen = max(maxlen, end - start + 1);
                end++;
            }
            else
            {
                st.erase(s[start]);
                start++;
            }
        }
        return maxlen;
    }
};