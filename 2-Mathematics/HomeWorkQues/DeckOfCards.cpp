class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        int n = deck.size();
        
        // Find frequency of each card
        map <int,int> frequency;
        for(int i=0; i<n; i++)
        {
            frequency[deck[i]]++;
        }
        
        int gcd = 0;
        
        for(auto it: frequency)
        {
            int freq = it.second;
            if(gcd == 0){
                gcd = freq;
            }
            else
            {
                gcd = __gcd(gcd, freq);
            }
        }
        
        if(gcd == 1)
            return false;
        else
            return true;
    }
};