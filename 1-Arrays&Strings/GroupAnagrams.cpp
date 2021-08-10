https://leetcode.com/problems/group-anagrams/

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        // TC : O(nklogk)
        // SC : O(n)
        vector<vector<string>> res;
        unordered_map<string, vector<string>> keys;
        string temp;

        // Storing the string in temp variable,
        // sorting it and pushing it in the map
        for (auto i : strs)
        {
            temp = i;
            sort(temp.begin(), temp.end());
            keys[temp].push_back(i);
        }

        // Traversing map and adding vector of
        // string to the result vector
        for (auto it = keys.begin(); it != keys.end(); it++)
        {
            res.push_back(it->second);
        }
        return res;

        // TC : O(nk)
        // SC : O(nk)
        vector<vector<string>> res;
        map<vector<int>, vector<string>> keys;

        // Iterating over the input vector and
        // counting the frequency of characters
        for (auto i : strs)
        {
            vector<int> freq(26, 0);
            for (char ch : i)
            {
                freq[ch - 'a']++;
            }
            keys[freq].push_back(i);
        }

        // Traversing map and adding vector of
        // string to the result vector
        for (auto it = keys.begin(); it != keys.end(); it++)
        {
            res.push_back(it->second);
        }
        return res;
    }
};
